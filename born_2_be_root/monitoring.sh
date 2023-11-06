#OS
os=$(uname -a)

#physical and  proccesors
phy_proc=$(grep "physical id" /proc/cpuinfo | wc -l)
v_proc=$(grep "processor" /proc/cpuinfo | wc -l)

#RAM
ram_total=$(free -m | awk '$1=="Mem:" {printf("%.0fMb\n", $2)}')
ram_used=$(free -m | awk '$1=="Mem:" {print $3}')
ram_perc=$(free -m | awk '$1=="Mem:" {printf ("%.2f%%\n", $3/$2*100)}')

#MEMORY
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_total += $2} END {printf ("%.0fGb\n", memory_total/1024)}' )
disk_used=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_use += $3} END {print memory_use}' )
disk_perc=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_total += $2} {memory_use += $3} END {printf ("%.0f%%\n", memory_use/memory_total*100)}' )

#CPU
cpu_idle=$(vmstat 1 2 | tail -1 | awk '{printf "%d", $15}')
cpu_op=$(expr 100 - $cpu_idle)
cpu_fin=$(printf "%.1f%%" $cpu_op)

#LAST BOOT
lboot=$(who -b | awk '$1 == "system" {print $3 " " $4}')

#LVM
lvm_yn=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

#Connections TCP
tcp_con=$(ss -ta | grep "ESTAB" | wc -l)

#Users
u_logd=$(users | wc -w)

#NETWORK
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

#SUDO COMMANDS
cmnd=$(journalctl _COMM=sudo | grep "COMMAND" | wc -l)

wall "
        #Architecture: $os
        #CPU physical : $phy_proc
        #vCPU : $v_proc
        #Memory Usage: $ram_used/$ram_total ($ram_perc)
        #Disk Usage: $disk_used/$disk_total ($disk_perc)
        #CPU load: $cpu_fin
        #Last boot: $lboot
        #LVM use: $lvm_yn
        #Conections TCP: $tcp_con ESTABLISHED
        #User log: $u_logd
        #Network: IP $ip ($mac)
        #Sudo : $cmnd cmd"
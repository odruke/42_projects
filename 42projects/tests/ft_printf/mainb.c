#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    // Redirect stdout to a file for printf output
    int printf_fd = open("printf_output.txt", O_CREAT | O_WRONLY, 0644);
    dup2(printf_fd, STDOUT_FILENO);

    // Call printf
    printf("The value of pi is: %f\n", 3.141592);

    // Close the file
    close(printf_fd);

    // Redirect stdout to a file for ft_printf output
    int ft_printf_fd = open("ft_printf_output.txt", O_CREAT | O_WRONLY, 0644);
    dup2(ft_printf_fd, STDOUT_FILENO);

    // Call ft_printf
    // Replace the printf call with your ft_printf implementation
    // and adjust the format string and arguments as necessary
    printf("The value of pi is: %f\n", 3.141592);

    // Close the file
    close(ft_printf_fd);

    // Compare the output files
    int diff_result = system("diff printf_output.txt ft_printf_output.txt");

    // Check the result of the comparison
    if (diff_result == 0)
    {
        printf("Output is the same\n");
    }
    else
    {
        printf("Output is different\n");
    }

    return 0;
}

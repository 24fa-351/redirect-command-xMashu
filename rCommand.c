#include <unistd.h>
#include <sys/types.h>

//unfinished

int main(int argc, char *argv[]) {
    
    char *inp = argv[1];
    char *cmd = argv[2];
    char *out = argv[3];

    pid_t pid = fork();
    if (pid < -1) {
        perror("fork fail");
        return 1;
    }
}
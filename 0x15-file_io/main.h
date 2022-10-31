#ifndef MAIN_H
#define MAIN_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _copyf(char *from, char *to);
void _close(int fd);
ssize_t read_file(int *fd, char *buffer, int bufsize, char *filename);
int _putchar(char c);
#endif

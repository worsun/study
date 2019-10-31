/* 从socketfd描述字中读取"size"个字节. */
size_n readn(int fd, void* buffer, size_t size) {
    char *buffer_pointer = buffer;
    int length = size;

    while (length > 0) {
        int result = read(fd, buffer_pointer, length);
        if (result < 0) {
            if (errno == EINTR)
                continue;
            else
                return -1;
        } else if (result == 0) {
            break;
        }
        
        length -= result;
        buffer_pointer += result;
    }

    return size - length;
}

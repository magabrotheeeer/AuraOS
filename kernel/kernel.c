void void_func() {

}

int main() {
    char* video_memory = (char*) 0xb8000;
    *video_memory = 'X';
}

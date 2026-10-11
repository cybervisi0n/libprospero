extern int main();

void _start() {
  int ret = main();
  // TODO: need syscall support for exit()
}

#define NOB_IMPLEMENTATION
#include "nob.h"

int main(int argc, char **argv){

  NOB_GO_REBUILD_URSELF(argc, argv);
  Nob_Cmd cmd = {0};
  nob_cmd_append(&cmd, "cc");
  nob_cmd_append(&cmd, "-o", "test_program");
  nob_cmd_append(&cmd, "DataStructures/linkedList.c", "DataStructures/node.c");
  nob_cmd_append(&cmd, "test.c");
  nob_cmd_append(&cmd, "-I./DataStructures");
  if (!nob_cmd_run_sync(cmd))return 1;
  return 0;
}

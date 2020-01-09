#include "Commands/Groups/Auto/ExampleAuto.h"
#include "Commands/Actions/ExampleCommand.h"

ExampleAuto::ExampleAuto() {
  AddSequential(new ExampleCommand);
  AddParallel(new ExampleCommand);
}

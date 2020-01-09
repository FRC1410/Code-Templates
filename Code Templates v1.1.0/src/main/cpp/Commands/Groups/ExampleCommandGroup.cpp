#include "Commands/Groups/ExampleCommandGroup.h"
#include "Commands/Actions/ExampleCommand.h"

ExampleCommandGroup::ExampleCommandGroup() {
  AddSequential(new ExampleCommand);
  AddParallel(new ExampleCommand);
}
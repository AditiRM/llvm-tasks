//Basic Function pass : Go through all the directories &Print the function names in the module.

#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"

//defined in Pass.h
using namespace llvm;

namespace{
class Task : public FunctionPass{
	public:
		static char ID;
		Task() : FunctionPass(ID) {}
		bool runOnFunction(Function &F) override {
			auto name = F.getName();
			errs() << "Hello From: " << name << "\n";
			return false;
		}
};

}//namespace

char Task::ID = 0; // value does not matter only initialization is imp
static RegisterPass<Task> res("task", "This is a task pass.");




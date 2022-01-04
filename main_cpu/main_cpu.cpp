//
// Created by lzrs on 1/2/22.
//
#include "main_cpu.h"

void MainCPU::execute_cpu() {
   LexicalAnalysis lexer;
   input = lexer.ExecuteAnalysis();
   GeneralPurposeRegisters GeneralRegs;
   LexFragment* currentFragment;
   LexFragment* instruction;
   LexFragment* register1 = nullptr;
   LexFragment* register2 = nullptr;

    while (input.size()!=GeneralRegs.IP)
    {

        currentFragment = input.front();
        while(currentFragment->NextFragment!= nullptr)
        {
            if (currentFragment->FragmentLex=="INSTRUCTION") instruction = currentFragment;
            if(currentFragment->FragmentLex=="REGISTER")
            {
                if(register1== nullptr)
                {
                    register1 = currentFragment;
                }else{
                    register2 = currentFragment;
                }
            }
        }

        switch (instruction_hashmap[instruction->FragmentValue]) {

        }


    }


}
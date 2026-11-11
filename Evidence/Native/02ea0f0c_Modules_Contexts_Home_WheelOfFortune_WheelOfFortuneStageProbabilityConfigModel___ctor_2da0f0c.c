/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.WheelOfFortuneStageProbabilityConfigModel$$.ctor
void Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel___ctor (Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.WheelOfFortuneStageProbabilityConfigModel$$.ctor
   void Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel___ctor
   (Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel___ctor_2da0f0c
          (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
                    /* try { // try from 02ea0f0c to 02fa0f0f has its CatchHandler @ 02ea0c10 */
  puVar1 = PTR_DAT_0575ad70;
                    /* try { // try from 02ea0f10 to 02fa0f13 has its CatchHandler @ 02ea0f1c */
                    /* try { // try from 02ea0f14 to 02fa0f4f has its CatchHandler @ 02ea0c10 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02ea0f10 with catch @ 02ea0f1c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02ea0f04 with catch @ 02ea0f20
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02ea0f00 with catch @ 02ea0f24
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02ea0f08 with catch @ 02ea0f24
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02ea0e14 with catch @ 02ea0f28
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02ea0e78 with catch @ 02ea0f2c
                        */
  if ((bRam0000000005c2fa6d & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02ea0d34 with catch @ 02ea0f30
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02ea0d74 with catch @ 02ea0f34
                        */
    FUN_012d0dc8(PTR_DAT_057c9e58);
    FUN_012d0dc8(PTR_DAT_0575ad70);
    bRam0000000005c2fa6d = 1;
  }
                    /* try { // try from 02ea0f50 to 02fa0f53 has its CatchHandler @ 02ea0fcc */
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057c9e58;
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary_Int32Enum__float____ctor_3a08980
              (lVar3,*(undefined8 *)PTR_DAT_057c9e58);
    *(long *)(param_1 + 0x18) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x18),lVar3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
                    /* try { // try from 02ea0f90 to 02fa0fb7 has its CatchHandler @ 02ea0fd8 */
      System_Collections_Generic_Dictionary_Int32Enum__float____ctor_3a08980
                (lVar3,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x20) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x20),lVar3);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1;
      return auVar4;
                    /* try { // try from 02ea0fb8 to 02fa0fc3 has its CatchHandler @ 02ea0c10 */
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


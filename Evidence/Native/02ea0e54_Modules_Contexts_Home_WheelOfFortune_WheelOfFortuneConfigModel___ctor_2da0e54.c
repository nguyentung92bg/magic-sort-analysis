/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.WheelOfFortuneConfigModel$$.ctor
void Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel___ctor (Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.WheelOfFortuneConfigModel$$.ctor
   void Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel___ctor
   (Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneConfigModel___ctor_2da0e54(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_05799340;
  if ((bRam0000000005c2fa6c & 1) == 0) {
                    /* try { // try from 02ea0e78 to 02fa0e7f has its CatchHandler @ 02ea0f2c */
    FUN_012d0dc8(PTR_DAT_05794c48);
                    /* try { // try from 02ea0e80 to 02fa0eff has its CatchHandler @ 02ea0c10 */
    FUN_012d0dc8(PTR_DAT_05799340);
    bRam0000000005c2fa6c = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_05794c48);
    *(long *)(param_1 + 0x28) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x28),lVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


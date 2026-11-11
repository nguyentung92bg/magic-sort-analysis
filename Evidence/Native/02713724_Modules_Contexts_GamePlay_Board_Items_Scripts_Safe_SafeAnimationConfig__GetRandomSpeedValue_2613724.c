/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeAnimationConfig$$GetRandomSpeedValue
float Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__GetRandomSpeedValue (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeAnimationConfig$$GetRandomSpeedValue
   float Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__GetRandomSpeedValue
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__GetRandomSpeedValue_2613724
          (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000005c2ba1b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f6ab8);
    FUN_012d0dc8(PTR_DAT_0580bb00);
    FUN_012d0dc8(PTR_DAT_0577eec8);
    FUN_012d0dc8(PTR_DAT_0576d090);
    FUN_012d0dc8(PTR_DAT_0580f750);
    FUN_012d0dc8(PTR_DAT_05791040);
    bRam0000000005c2ba1b = 1;
  }
  plVar3 = (long *)(param_1 + 0xf0);
  lVar2 = *plVar3;
  if (lVar2 == 0) goto LAB_02713870;
  if (*(int *)(lVar2 + 0x18) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0580f750);
    if (lVar2 == 0) goto LAB_02713870;
    System_Collections_Generic_List_float____ctor_1d706d8
              (lVar2,uVar4,*(undefined8 *)PTR_DAT_0580bb00);
    *plVar3 = lVar2;
    FUN_012d0d74(plVar3,lVar2);
    lVar2 = *plVar3;
    if (lVar2 == 0) goto LAB_02713870;
  }
  uVar1 = *(undefined4 *)(lVar2 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_05791040 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar1 = Modules_Infrastructure_Common_Scripts_RandomUtil__GetRandomFromTo_40e4ab0(0,uVar1,0);
  if (*plVar3 != 0) {
    auVar5 = System_Collections_Generic_List_float___get_Item_1d70b20
                       (*plVar3,uVar1,*(undefined8 *)PTR_DAT_0576d090);
    uVar4 = auVar5._8_8_;
    if (*plVar3 != 0) {
      System_Collections_Generic_List_float___RemoveAt_1d72724
                (*plVar3,uVar1,*(undefined8 *)PTR_DAT_057f6ab8);
      auVar5._8_8_ = uVar4;
      return auVar5;
    }
  }
LAB_02713870:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


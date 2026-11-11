/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleView$$PlayBottleMoveEnd
void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__PlayBottleMoveEnd (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleView$$PlayBottleMoveEnd
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__PlayBottleMoveEnd
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__PlayBottleMoveEnd_2f59834
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c308c7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    bRam0000000005c308c7 = 1;
  }
  puVar3 = PTR_DAT_057fbae0;
  puVar2 = PTR_DAT_057936b8;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_0579f3e8);
    uVar1 = _UNK_04321764;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
      DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                (*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
                 *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),uVar1,uStack_38,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


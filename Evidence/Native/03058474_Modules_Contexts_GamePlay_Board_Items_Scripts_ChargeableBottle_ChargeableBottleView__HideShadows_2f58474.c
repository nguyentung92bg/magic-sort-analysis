/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleView$$HideShadows
void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__HideShadows (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleView$$HideShadows
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__HideShadows
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__HideShadows_2f58474
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c308c9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    bRam0000000005c308c9 = 1;
  }
  puVar2 = PTR_DAT_057fbae0;
  puVar1 = PTR_DAT_057936b8;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_0579f3e8);
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_38,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                (*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                 *(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),0,uStack_28,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


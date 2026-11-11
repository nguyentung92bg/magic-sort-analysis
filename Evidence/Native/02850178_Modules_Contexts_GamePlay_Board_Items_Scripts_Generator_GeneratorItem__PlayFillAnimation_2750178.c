/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$PlayFillAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__PlayFillAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, System_Collections_Generic_List_ValueTuple_int__ColorId___o* spawnedWaters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$PlayFillAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__PlayFillAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this,
   System_Collections_Generic_List_ValueTuple_int__ColorId___o* spawnedWaters, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__PlayFillAnimation_2750178
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  puVar1 = PTR_DAT_057606c8;
  if ((bRam0000000005c2c6e7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0577d338);
    FUN_012d0dc8(PTR_DAT_057efc38);
    FUN_012d0dc8(PTR_DAT_057ad740);
    FUN_012d0dc8(PTR_DAT_057cf390);
    FUN_012d0dc8(PTR_DAT_057b8b70);
    FUN_012d0dc8(PTR_DAT_0579ca98);
    FUN_012d0dc8(PTR_DAT_057cc180);
    FUN_012d0dc8(PTR_DAT_0581a7e8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    bRam0000000005c2c6e7 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar8 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,param_4,*(undefined8 *)PTR_DAT_057cf390,0);
    DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04339bf8,lVar8,0,0);
    if (*(long *)(param_4 + 0x50) != 0) {
      uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                        (*(long *)(param_4 + 0x50),0);
      if (*(long *)(param_4 + 0x50) != 0) {
        lVar8 = *(long *)(*(long *)(param_4 + 0x50) + 0x40);
        if (lVar8 != 0) {
          Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar8,param_4,0);
          if (*(long *)(param_4 + 0x50) != 0) {
            uVar12 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                               (*(long *)(param_4 + 0x50),0);
            puVar2 = PTR_DAT_0581a7e8;
            puVar4 = PTR_DAT_0579e470;
            lVar8 = *(long *)(param_4 + 0x50);
            if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x48) == 4) {
                if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                uVar9 = DG_Tweening_DOTween__Sequence_1eda154(0);
                puVar5 = PTR_DAT_057efc38;
                puVar3 = PTR_DAT_0579ca98;
                puVar2 = PTR_DAT_0577d338;
                if (param_5 != 0) {
                  System_Collections_Generic_List_ValueTuple_int__Int32Enum____GetEnumerator_2bfa790
                            (&uStack_78,param_5,*(undefined8 *)PTR_DAT_057cc180);
                  while (uVar10 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_41ca468
                                            (&uStack_78,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
                    if (*(long *)(param_4 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorFillAnimationFromBottom_249a50c
                                       (uVar12,param_2,param_3,*(long *)(param_4 + 0x50),0,uStack_68
                                        ,uStack_68 >> 0x20,0);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar9,uVar11,0);
                  }
                  System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_41ca464
                            (&uStack_78,*(undefined8 *)puVar2);
                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar8 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,param_4,*(undefined8 *)puVar3,0);
                    uVar12 = *(undefined8 *)puVar4;
LAB_02850464:
                    DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                              (uVar9,lVar8,uVar12);
                    return;
                  }
                }
              }
              else if (param_5 != 0) {
                uVar7 = System_Collections_Generic_List_ValueTuple_int__Int32Enum____get_Item_2bf98d0
                                  (param_5,0,*(undefined8 *)PTR_DAT_0581a7e8);
                uVar10 = System_Collections_Generic_List_ValueTuple_int__Int32Enum____get_Item_2bf98d0
                                   (param_5,0,*(undefined8 *)puVar2);
                uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorFillAnimation_249a238
                                  (uVar12,param_2,param_3,lVar8,uVar7,uVar6,uVar10 >> 0x20,0);
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar8 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar8,param_4,*(undefined8 *)PTR_DAT_057b8b70,0);
                  uVar12 = *(undefined8 *)puVar4;
                  goto LAB_02850464;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


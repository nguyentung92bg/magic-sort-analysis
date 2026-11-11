/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, System_Collections_Generic_List_ValueTuple_int__ColorId___o* spawnedWaters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this,
   System_Collections_Generic_List_ValueTuple_int__ColorId___o* spawnedWaters, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__Complete_274fff8
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = param_4;
  if ((bRam0000000005c2c6ec & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05757e80);
    FUN_012d0dc8(PTR_DAT_05767ec8);
    lVar6 = FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2c6ec = 1;
  }
  if (*(char *)(param_4 + 0x40) != '\0') {
    return lVar6;
  }
  *(undefined1 *)(param_4 + 0x40) = 1;
  if (*(long *)(param_4 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
              (*(long *)(param_4 + 0x50),param_4,0);
    puVar3 = PTR_DAT_0576aae0;
    if (*(long *)(param_4 + 0x50) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                (*(long *)(param_4 + 0x50),param_4,0);
      if (((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
          (lVar6 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar6 != 0)) &&
         (plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar6,*(undefined8 *)PTR_DAT_057e8f70),
         puVar4 = PTR_DAT_057b8520, puVar3 = PTR_DAT_05767ec8, plVar7 != (long *)0x0)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_05757e80 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar2) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05757e80
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288();
        }
        if ((plVar7[7] != 0) && (lVar6 = *(long *)(plVar7[7] + 0x30), lVar6 != 0)) {
          Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__ResetSelectionHistory_16106c8
                    (lVar6,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar3);
          if (lVar6 != 0) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
            puVar3 = PTR_DAT_057606c8;
            if ((bRam0000000005c2c6e9 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057b8318);
              FUN_012d0dc8(PTR_DAT_057d7910);
              FUN_012d0dc8(PTR_DAT_057606c8);
              FUN_012d0dc8(PTR_DAT_0579e470);
              FUN_012d0dc8(PTR_DAT_057e6390);
              FUN_012d0dc8(PTR_DAT_0578e950);
              bRam0000000005c2c6e9 = 1;
            }
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            puVar4 = PTR_DAT_0578e950;
            if (lVar6 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,param_4,*(undefined8 *)PTR_DAT_057b8318,0);
              DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04339bf8,lVar6,0,0);
              lVar6 = *(long *)puVar4;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar6 = *(long *)puVar4;
              }
              lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
              if (lVar8 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar6 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                if (lVar8 == 0) goto LAB_02850a38;
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar8,uVar9,*(undefined8 *)PTR_DAT_057e6390,0);
                plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                *plVar7 = lVar8;
                FUN_012d0d74(plVar7,lVar8);
              }
              DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_0438f370,lVar8,1,0);
              if (*(long *)(param_4 + 0x50) != 0) {
                uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                                  (*(long *)(param_4 + 0x50),0);
                if (*(long *)(param_4 + 0x50) != 0) {
                  lVar6 = *(long *)(*(long *)(param_4 + 0x50) + 0x40);
                  if (lVar6 != 0) {
                    Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                              (lVar6,param_4,0);
                    if (*(long *)(param_4 + 0x50) != 0) {
                      uVar10 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                                         (*(long *)(param_4 + 0x50),0);
                      lVar6 = *(long *)(param_4 + 0x50);
                      uVar9 = param_2;
                      uVar12 = param_3;
                      if (cRam0000000005c230aa == '\0') {
                        FUN_012d0dc8(PTR_DAT_05805c10);
                        cRam0000000005c230aa = '\x01';
                      }
                      if (lVar6 != 0) {
                        uVar1 = *(undefined4 *)
                                 (*(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8) + 1);
                        *(undefined8 *)(lVar6 + 0x34) =
                             **(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                        *(undefined4 *)(lVar6 + 0x3c) = uVar1;
                        if (*(long *)(param_4 + 0x50) != 0) {
                          uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                                             (*(long *)(param_4 + 0x50),0);
                          if (*(long *)(param_4 + 0x50) != 0) {
                            lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorExplosionAnimation_249ac04
                                              (uVar10,param_2,param_3,uVar11,uVar9,uVar12,
                                               *(long *)(param_4 + 0x50),uVar5,param_5,0);
                            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                            puVar3 = PTR_DAT_0579e470;
                            if (lVar8 != 0) {
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar8,param_4,*(undefined8 *)PTR_DAT_057d7910,0);
                              uVar9 = *(undefined8 *)puVar3;
                              if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
                                *(long *)(lVar6 + 0x80) = lVar8;
                                FUN_012d0d74((long *)(lVar6 + 0x80),lVar8,uVar9);
                              }
                              return lVar6;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_02850a38:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


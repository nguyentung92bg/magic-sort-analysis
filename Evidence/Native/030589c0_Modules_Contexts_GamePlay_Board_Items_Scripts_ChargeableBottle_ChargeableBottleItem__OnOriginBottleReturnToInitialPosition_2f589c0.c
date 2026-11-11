/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$OnOriginBottleReturnToInitialPosition
void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__OnOriginBottleReturnToInitialPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$OnOriginBottleReturnToInitialPosition
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__OnOriginBottleReturnToInitialPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__OnOriginBottleReturnToInitialPosition_2f589c0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c308bc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057d6390);
    FUN_012d0dc8(PTR_DAT_0575d980);
    FUN_012d0dc8(PTR_DAT_057ba338);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c308bc = 1;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  puVar1 = PTR_DAT_057ba338;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057d6390;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    }
    Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__SendSuperChargerUsedEvent_2f58bc8
              ();
    if (0 < *(int *)(param_1 + 0x58)) {
      return;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__ShowAnimationBottle_2f58c80
                ();
      if (*(long *)(param_1 + 0x50) != 0) {
        plVar4 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (*(long *)(param_1 + 0x50),0);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (plVar4 != (long *)0x0) {
          lVar3 = *plVar4;
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
          uVar12 = *puVar8;
          uVar11 = puVar8[1];
          uVar10 = puVar8[2];
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
                puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                goto LAB_03058b60;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0575a2d8,7);
LAB_03058b60:
          (*(code *)*puVar5)(uVar12,uVar11,uVar10,plVar4,puVar5[1]);
          puVar1 = PTR_DAT_0575d980;
          if (*(long *)(param_1 + 0x48) != 0) {
            Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__PlayBottleHideAnimation_2f58ca0
                      ();
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar1);
            if (lVar3 == 0) {
              return;
            }
            lVar6 = *(long *)(lVar3 + 0x20);
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
            }
            lVar6 = *(long *)(lVar3 + 0x10);
            if (lVar6 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),lVar3,0,*(undefined8 *)(lVar6 + 0x28));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


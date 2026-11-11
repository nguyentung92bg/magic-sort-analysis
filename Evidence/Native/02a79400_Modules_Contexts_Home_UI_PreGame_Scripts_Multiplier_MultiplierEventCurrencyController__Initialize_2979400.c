/* IL2CPP: Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier.MultiplierEventCurrencyController$$Initialize
void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController__Initialize (Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController_o* __this, System_Collections_Generic_List_MultiplierEventCurrencyViewModel__o* eventCurrencyVms, int32_t difficulty, bool playAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier.MultiplierEventCurrencyController$$Initialize
   void 
   Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController__Initialize
   (Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController_o* __this,
   System_Collections_Generic_List_MultiplierEventCurrencyViewModel__o* eventCurrencyVms, int32_t
   difficulty, bool playAnimation, const MethodInfo* method); */

void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController__Initialize_2979400
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               long param_5,undefined4 param_6,uint param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  if ((bRam0000000005c2d717 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05777d38);
    FUN_012d0dc8(PTR_DAT_0579fa00);
    FUN_012d0dc8(PTR_DAT_05771f48);
    FUN_012d0dc8(PTR_DAT_057a6180);
    FUN_012d0dc8(PTR_DAT_0578b028);
    FUN_012d0dc8(PTR_DAT_05803090);
    FUN_012d0dc8(PTR_DAT_057d0140);
    bRam0000000005c2d717 = 1;
  }
  puVar5 = PTR_DAT_05803090;
  puVar4 = PTR_DAT_057d0140;
  puVar3 = PTR_DAT_0579fa00;
  puVar2 = PTR_DAT_05777d38;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_4 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,*(long *)(param_4 + 0x18),*(undefined8 *)PTR_DAT_057a6180);
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    lStack_90 = lStack_a8;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_a0,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__Hide_2979854
                ();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_a0,*(undefined8 *)puVar2);
    if ((param_5 != 0) && (*(long *)(param_4 + 0x28) != 0)) {
      iVar1 = *(int *)(param_5 + 0x18);
      fVar10 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x28),0);
      if (*(long *)(param_4 + 0x20) != 0) {
        fVar11 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x20),0);
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            if (*(long *)(param_4 + 0x20) == 0) goto LAB_02a79614;
            fVar12 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x20),0)
            ;
            if (*(long *)(param_4 + 0x18) == 0) goto LAB_02a79614;
            lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_4 + 0x18),iVar9,*(undefined8 *)puVar4);
            uVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (param_5,iVar9,*(undefined8 *)puVar5);
            if (lVar7 == 0) goto LAB_02a79614;
            Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__Initialize_2979878
                      ((fVar10 - fVar11) * (((float)iVar9 + 1.0) / ((float)iVar1 + 1.0)) + fVar12,
                       param_2,param_3,lVar7,uVar8,param_6,param_7 & 1);
            iVar9 = iVar9 + 1;
          } while (iVar1 != iVar9);
        }
        return;
      }
    }
  }
LAB_02a79614:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


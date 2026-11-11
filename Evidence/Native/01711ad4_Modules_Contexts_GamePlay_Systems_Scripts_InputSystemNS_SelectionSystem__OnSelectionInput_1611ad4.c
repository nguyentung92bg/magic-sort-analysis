/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$OnSelectionInput
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__OnSelectionInput (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$OnSelectionInput
   void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__OnSelectionInput
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__OnSelectionInput_1611ad4
               (long param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  
  puVar5 = PTR_DAT_057b8520;
  if ((bRam0000000005c24488 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e4b00);
    FUN_012d0dc8(PTR_DAT_057fac00);
    FUN_012d0dc8(PTR_DAT_057965b8);
    FUN_012d0dc8(PTR_DAT_058164b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057916a0);
    bRam0000000005c24488 = 1;
  }
  puVar6 = PTR_DAT_058164b8;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar6);
  puVar6 = PTR_DAT_057e4b00;
  puVar5 = PTR_DAT_057965b8;
  if (lVar8 == 0) goto LAB_01711ddc;
                    /* try { // try from 01711b84 to 01811d73 has its CatchHandler @ 01711b84
                       catch() { ... } // from try @ 01711b84 with catch @ 01711b84
                       catch() { ... } // from try @ 01711e38 with catch @ 01711b84
                       catch() { ... } // from try @ 01711ec0 with catch @ 01711b84
                       catch() { ... } // from try @ 01711f58 with catch @ 01711b84 */
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
            (lVar8,2,*(undefined8 *)PTR_DAT_057916a0);
  plVar14 = (long *)(param_1 + 0x18);
  lVar8 = *plVar14;
  if (lVar8 == 0) {
LAB_01711bcc:
    cVar2 = *(char *)(param_1 + 0x38);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar8 == 0) goto LAB_01711ddc;
    Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection___ctor_1612708
              (lVar8,param_2,cVar2 != '\0');
    *(long *)(param_1 + 0x18) = lVar8;
    FUN_012d0d74(plVar14,lVar8);
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) goto LAB_01711ddc;
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)puVar6;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_01711ddc;
    uVar3 = *(uint *)(lVar8 + 0x18);
    if (uVar3 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar3 + 1;
      puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
      *puVar12 = uVar10;
      FUN_012d0d74(puVar12);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))();
    }
  }
  else if (*(long *)(lVar8 + 0x28) != param_2) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01711ddc;
    System_Collections_Generic_List_object___Remove_21fe044
              (*(long *)(param_1 + 0x20),lVar8,*(undefined8 *)PTR_DAT_057fac00);
    goto LAB_01711bcc;
  }
  lVar8 = *plVar14;
  if (lVar8 == 0) goto LAB_01711ddc;
  if (*(long *)(lVar8 + 0x10) == 0) {
    if (param_3 == (long *)0x0) goto LAB_01711ddc;
    uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
    lVar8 = *plVar14;
    if (lVar8 == 0) goto LAB_01711ddc;
    if ((uVar9 & 1) != 0) {
      Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__SelectAsOrigin_1612800
                (lVar8,param_3);
      if (*(char *)(param_1 + 0x48) != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x48) = 1;
      return;
    }
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
                    /* try { // try from 01711d74 to 01811d9b has its CatchHandler @ 01711edc */
    return;
  }
  uVar9 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CanSelectAsTarget_160fdb4
                    (lVar8,param_3);
  lVar8 = *plVar14;
  if (lVar8 != 0) {
    if ((uVar9 & 1) == 0) {
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((lVar8 != 0) &&
         (uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                            (lVar8,0), param_3 != (long *)0x0)) {
        uVar9 = (**(code **)(*param_3 + 0x1f8))
                          (param_3,lVar8,uVar7,*(undefined8 *)(*param_3 + 0x200));
        if ((uVar9 & 1) != 0) {
          return;
        }
        if (*plVar14 != 0) {
          Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__Deselect_1612d38();
code_r0x012d0d74:
          *plVar14 = 0;
                    /* try { // try from 01711dd0 to 01811df7 has its CatchHandler @ 01711ed8 */
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
    else {
      Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__SelectAsTarget_16128bc
                (lVar8,param_3);
      if (*plVar14 != 0) {
        Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__ApplySelection_1612e74();
        lVar8 = *(long *)(param_1 + 0x28);
        if (lVar8 != 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x18);
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
              *puVar12 = uVar10;
              FUN_012d0d74(puVar12);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))();
            }
            if (*(long *)(param_1 + 0x10) != 0) {
              Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddMove_1f1a528
                        (*(long *)(param_1 + 0x10),*plVar14,0);
            }
            goto code_r0x012d0d74;
          }
        }
      }
    }
  }
LAB_01711ddc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


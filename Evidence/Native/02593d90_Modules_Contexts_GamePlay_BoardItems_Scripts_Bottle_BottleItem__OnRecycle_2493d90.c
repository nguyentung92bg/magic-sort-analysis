/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnRecycle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnRecycle (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnRecycle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnRecycle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnRecycle_2493d90
               (long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((bRam0000000005c2b2c5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c7520);
    FUN_012d0dc8(PTR_DAT_058141a0);
    FUN_012d0dc8(PTR_DAT_057bb920);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057e5fc8);
    FUN_012d0dc8(PTR_DAT_057e8460);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2c5 = 1;
  }
  puVar4 = PTR_DAT_05802430;
  puVar3 = PTR_DAT_057f2468;
  puVar2 = PTR_DAT_057e8460;
  lVar5 = param_1[0x10];
  if (lVar5 != 0) {
    iVar11 = 0;
    do {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 <= iVar11) {
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
        }
        lVar5 = param_1[0x11];
        if (lVar5 != 0) {
          iVar11 = 0;
          goto LAB_02593ea8;
        }
        break;
      }
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar11,*(undefined8 *)puVar3);
      if (lVar5 == 0) break;
      Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__Recycle_1e90aa8(lVar5,0);
      lVar5 = param_1[0x10];
      iVar11 = iVar11 + 1;
    } while (lVar5 != 0);
  }
  goto LAB_025940c4;
  while( true ) {
    lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar5,iVar11,*(undefined8 *)puVar4);
    if (lVar5 == 0) break;
    Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar5,0);
    lVar5 = param_1[0x11];
    iVar11 = iVar11 + 1;
    if (lVar5 == 0) break;
LAB_02593ea8:
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 <= iVar11) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      lVar5 = param_1[0x12];
      if (lVar5 != 0) {
        iVar11 = 0;
        goto LAB_02593f0c;
      }
      break;
    }
  }
  goto LAB_025940c4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_041ea218:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
      goto LAB_041ea250;
    }
  }
LAB_041ea230:
  puVar6 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,9);
LAB_041ea250:
                    /* WARNING: Could not recover jumptable at 0x041ea278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(uVar12,uVar13,uVar14,uVar15,plVar10,puVar6[1]);
  return;
  while( true ) {
    lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar5,iVar11,*(undefined8 *)puVar2);
    if (lVar5 == 0) break;
    Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar5,0);
    lVar5 = param_1[0x12];
    iVar11 = iVar11 + 1;
    if (lVar5 == 0) break;
LAB_02593f0c:
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 <= iVar11) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      lVar5 = param_1[0x13];
      if (lVar5 != 0) {
        iVar11 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (0 < iVar11) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar11,0);
        }
        if (param_1[8] != 0) {
          Modules_Infrastructure_Common_Scripts_Component_Lock__Clear_40ead58(param_1[8],0);
          if (param_1[0x17] != 0) {
            Modules_Infrastructure_Common_Scripts_Component_Lock__Clear_40ead58(param_1[0x17],0);
            if (param_1[0x16] != 0) {
              Modules_Infrastructure_Common_Scripts_Component_Lock__Clear_40ead58(param_1[0x16],0);
              *(undefined1 *)((long)param_1 + 0x4c) = 0;
              param_1[0xb] = 0;
              FUN_012d0d74(param_1 + 0xb,0);
              param_1[0xc] = 0;
              FUN_012d0d74(param_1 + 0xc,0);
              lVar5 = param_1[0x1c];
              if (lVar5 != 0) {
                Modules_Infrastructure_Common_Scripts_Component_AItemPart__Recycle_40ea4c0(lVar5,0);
              }
              param_1[0x1c] = 0;
              FUN_012d0d74(param_1 + 0x1c,0);
              Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
              if (cRam0000000005c230a9 == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230a9 = '\x01';
              }
              puVar2 = PTR_DAT_05805c10;
              lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
              (**(code **)(*param_1 + 0x1d8))
                        (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                         *(undefined4 *)(lVar5 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
              if (cRam0000000005c230aa == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230aa = '\x01';
              }
              pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
              uVar15 = (ulong)(uint)pfVar7[2];
              uVar13 = (ulong)(uint)(pfVar7[1] * _UNK_04339bec);
              uVar14 = (ulong)(uint)(pfVar7[2] * _UNK_04339bec);
              uVar12 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                                 (*pfVar7 * _UNK_04339bec,uVar13,uVar14,0);
              if ((bRam0000000005c3aa8b & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_0575a2d8,0);
                bRam0000000005c3aa8b = 1;
              }
              if ((param_1[4] == 0) ||
                 (plVar10 = *(long **)(param_1[4] + 0x18), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              lVar5 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar8 == 0) goto LAB_041ea230;
              piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              goto LAB_041ea218;
            }
          }
        }
      }
      break;
    }
  }
LAB_025940c4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


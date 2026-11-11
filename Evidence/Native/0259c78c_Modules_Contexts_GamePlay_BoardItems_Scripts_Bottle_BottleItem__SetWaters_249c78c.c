/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetWaters
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetWaters (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, System_Collections_Generic_List_WaterAndColor__o* watersInside, System_Collections_Generic_List_WaterAndColor__o* watersOutside, bool revealQuestionMarks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetWaters
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetWaters
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   System_Collections_Generic_List_WaterAndColor__o* watersInside,
   System_Collections_Generic_List_WaterAndColor__o* watersOutside, bool revealQuestionMarks, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetWaters_249c78c
               (long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  ulong uVar15;
  int iVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  
  if ((bRam0000000005c2b30b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ee0e8);
    FUN_012d0dc8(PTR_DAT_0576d318);
    FUN_012d0dc8(PTR_DAT_057bf230);
    FUN_012d0dc8(PTR_DAT_057ace08);
    FUN_012d0dc8(PTR_DAT_0578bf88);
    FUN_012d0dc8(PTR_DAT_05758878);
    FUN_012d0dc8(PTR_DAT_057d99c8);
    FUN_012d0dc8(PTR_DAT_057cbfe8);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057c7498);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_0575d540);
    bRam0000000005c2b30b = 1;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    plVar8 = (long *)FUN_012d0e38(*(undefined8 *)PTR_DAT_057ee0e8,
                                  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x18));
    puVar5 = PTR_DAT_057f2468;
    puVar4 = PTR_DAT_057c7498;
    lVar10 = *(long *)(param_1 + 0x80);
    if (lVar10 != 0) {
      uVar15 = 0;
      plVar19 = plVar8 + 4;
      do {
        if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar15) {
          if (param_2 != 0) {
            if (*(int *)(param_2 + 0x18) < 1) goto LAB_0259cb40;
            iVar6 = 0;
            iVar16 = 0;
            goto LAB_0259ca38;
          }
          break;
        }
        lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar10,uVar15 & 0xffffffff,*(undefined8 *)puVar5);
        if (lVar10 == 0) break;
        lVar11 = *(long *)(lVar10 + 0x28);
        if (lVar11 != 0) {
          if (lVar11 == 0) break;
          Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar11,0);
        }
        *(undefined8 *)(lVar10 + 0x28) = 0;
        FUN_012d0d74((long *)(lVar10 + 0x28),0);
        *(undefined8 *)(lVar10 + 0x20) = 0;
        FUN_012d0d74((undefined8 *)(lVar10 + 0x20),0);
        puVar17 = (undefined8 *)(lVar10 + 0x30);
        plVar18 = (long *)*puVar17;
        if (plVar18 != (long *)0x0) {
          if (plVar8 == (long *)0x0) break;
          lVar10 = thunk_FUN_01320d5c(plVar18,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) {
            uVar9 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
            FUN_012d0eb8(uVar9,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar15) goto LAB_0259ce5c;
          *plVar19 = (long)plVar18;
          FUN_012d0d74(plVar19,plVar18);
          Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(plVar18,0,0);
          lVar10 = *plVar18;
          bVar14 = *(byte *)(lVar10 + 300);
          bVar3 = *(byte *)(*(long *)PTR_DAT_0575d540 + 300);
          if ((bVar3 <= bVar14) &&
             (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) ==
              *(long *)PTR_DAT_0575d540)) {
            plVar18[10] = 0;
            FUN_012d0d74(plVar18 + 10,0);
            lVar10 = *plVar18;
            bVar14 = *(byte *)(lVar10 + 300);
          }
          bVar3 = *(byte *)(*(long *)PTR_DAT_05758878 + 300);
          if ((bVar3 <= bVar14) &&
             (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) ==
              *(long *)PTR_DAT_05758878)) {
            plVar18[0xb] = 0;
            FUN_012d0d74(plVar18 + 0xb,0);
          }
          *puVar17 = 0;
          FUN_012d0d74(puVar17,0);
        }
        lVar10 = *(long *)(param_1 + 0x80);
        uVar15 = uVar15 + 1;
        plVar19 = plVar19 + 1;
      } while (lVar10 != 0);
    }
  }
  goto LAB_0259ce58;
  while( true ) {
    plVar19 = *(long **)(lVar10 + 0x10);
    iVar2 = *(int *)(lVar10 + 0x1c);
    if (plVar19 == (long *)0x0) {
      if ((param_4 & 1) == 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWater_249ce6c
                  (param_1,iVar2,*(undefined4 *)(lVar10 + 0x18),*(char *)(lVar10 + 0x20) != '\0',
                   *(char *)(lVar10 + 0x21) != '\0',0);
      }
      else {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWaterAccordingVisibility_249cf80
                  (param_1,iVar2,*(undefined4 *)(lVar10 + 0x18),*(char *)(lVar10 + 0x20) != '\0',
                   *(char *)(lVar10 + 0x21) != '\0');
      }
    }
    else {
      iVar1 = iVar16;
      if (iVar16 < iVar2 + iVar16) {
        do {
          if ((*(long *)(param_1 + 0x80) == 0) ||
             (lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar5),
             lVar11 == 0)) goto LAB_0259ce58;
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
          FUN_012d0d74();
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(lVar10 + 0x1c) + iVar16);
        plVar19 = *(long **)(lVar10 + 0x10);
        if (plVar19 == (long *)0x0) goto LAB_0259ce58;
      }
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                (plVar19,(int)plVar19[8],iVar16,*(undefined4 *)(param_1 + 0x48),0);
      (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
      iVar16 = *(int *)(lVar10 + 0x1c) + iVar16;
    }
    iVar6 = iVar6 + 1;
    if (*(int *)(param_2 + 0x18) <= iVar6) break;
LAB_0259ca38:
    lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (param_2,iVar6,*(undefined8 *)puVar4);
    if (lVar10 == 0) goto LAB_0259ce58;
  }
LAB_0259cb40:
  lVar10 = *(long *)(param_1 + 0x80);
  if (lVar10 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar6) {
        lVar10 = *(long *)(param_1 + 0x88);
        if (lVar10 != 0) {
          iVar6 = 0;
          goto LAB_0259cbb4;
        }
        break;
      }
      lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar10,iVar6,*(undefined8 *)puVar5);
      if (lVar10 == 0) break;
      if ((*(long *)(lVar10 + 0x20) != 0) && (*(char *)(*(long *)(lVar10 + 0x20) + 0x54) == '\0')) {
        if (*(long *)(param_1 + 0xd0) == 0) break;
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddQuestionMarkItem_2f661c8
                  (*(long *)(param_1 + 0xd0),param_1,iVar6,0,0);
      }
      lVar10 = *(long *)(param_1 + 0x80);
      iVar6 = iVar6 + 1;
    } while (lVar10 != 0);
  }
  goto LAB_0259ce58;
LAB_0259cce0:
  if (uVar12 <= uVar15) {
LAB_0259ce5c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  plVar19 = (long *)plVar8[uVar15 + 4];
  if (plVar19 != (long *)0x0) {
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (*(long *)(param_1 + 0x80),uVar15 & 0xffffffff,*(undefined8 *)puVar5),
       lVar11 == 0)) goto LAB_0259ce58;
    *(undefined8 *)(lVar11 + 0x30) = plVar19;
    FUN_012d0d74((undefined8 *)(lVar11 + 0x30),plVar19);
    lVar13 = *plVar19;
    bVar14 = *(byte *)(lVar13 + 300);
    bVar3 = *(byte *)(*(long *)PTR_DAT_0575d540 + 300);
    if ((bVar3 <= bVar14) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_0575d540)) {
      plVar19[10] = lVar11;
      FUN_012d0d74(plVar19 + 10,lVar11);
      lVar13 = *plVar19;
      bVar14 = *(byte *)(lVar13 + 300);
    }
    bVar3 = *(byte *)(*(long *)PTR_DAT_05758878 + 300);
    if ((bVar3 <= bVar14) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_05758878)) {
      plVar19[0xb] = lVar11;
      FUN_012d0d74(plVar19 + 0xb,lVar11);
    }
    if (*(long *)(lVar11 + 0x20) != 0) {
      uVar9 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                        (*(long *)(lVar11 + 0x20),0);
      Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(plVar19,uVar9,0);
      iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                        (param_1,*(undefined8 *)(lVar11 + 0x20));
      uVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey_3ed04a4
                        (lVar10,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)PTR_DAT_0576d318);
      Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPosition_40e9e74
                (0,(float)(int)(iVar6 + (uVar7 & 1)) + 0.5,0,plVar19,0);
      System_Collections_Generic_Dictionary_object__object___TryAdd_3ed1b74
                (lVar10,*(undefined8 *)(lVar11 + 0x20),plVar19,*(undefined8 *)PTR_DAT_057bf230);
    }
  }
  uVar12 = (ulong)*(uint *)(plVar8 + 3);
  uVar15 = uVar15 + 1;
  if ((long)(int)*(uint *)(plVar8 + 3) <= (long)uVar15) {
    return;
  }
  goto LAB_0259cce0;
  while( true ) {
    plVar19 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar10,iVar6,*(undefined8 *)PTR_DAT_05802430);
    if (plVar19 != (long *)0x0) {
      bVar14 = *(byte *)(*(long *)PTR_DAT_057d99c8 + 300);
      if ((bVar14 <= *(byte *)(*plVar19 + 300)) &&
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar14 * 8 + -8) == *(long *)PTR_DAT_057d99c8
         )) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__RemoveWaterColorIds_27510a8
                  (plVar19,0);
        if (param_3 == 0) break;
        if (0 < *(int *)(param_3 + 0x18)) {
          iVar16 = 0;
          do {
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (param_3,iVar16,*(undefined8 *)puVar4);
            if (lVar10 == 0) goto LAB_0259ce58;
            lVar11 = *(long *)(lVar10 + 0x10);
            if (lVar11 != 0) {
              if (lVar11 == 0) goto LAB_0259ce58;
              Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar11,0);
            }
            Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__AddWaterColorId_2750fb4
                      (plVar19,*(undefined4 *)(lVar10 + 0x1c),*(undefined4 *)(lVar10 + 0x18),0);
            iVar16 = iVar16 + 1;
          } while (iVar16 < *(int *)(param_3 + 0x18));
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0x88);
    iVar6 = iVar6 + 1;
    if (lVar10 == 0) break;
LAB_0259cbb4:
    if (*(int *)(lVar10 + 0x18) <= iVar6) {
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578bf88);
      if ((lVar10 != 0) &&
         (System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                    (lVar10,*(undefined8 *)PTR_DAT_057ace08), plVar8 != (long *)0x0)) {
        if ((int)plVar8[3] < 1) {
          return;
        }
        uVar15 = 0;
        uVar12 = plVar8[3] & 0xffffffff;
        goto LAB_0259cce0;
      }
      break;
    }
  }
LAB_0259ce58:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


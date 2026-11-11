/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$SetTargetHeight
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__SetTargetHeight (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, int32_t targetHeight, int32_t watersHeightBelow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$SetTargetHeight
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__SetTargetHeight
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, int32_t
   targetHeight, int32_t watersHeightBelow, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__SetTargetHeight_37b2068
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,undefined4 param_5,
               int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000005c33e69 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b1718);
    FUN_012d0dc8(PTR_DAT_057f8600);
    bRam0000000005c33e69 = 1;
  }
  lVar4 = *(long *)(param_4 + 0x48);
  *(undefined4 *)(param_4 + 0x58) = param_5;
  *(int *)(param_4 + 0x5c) = param_6;
  puVar2 = PTR_DAT_05805c10;
  puVar1 = PTR_DAT_057f8600;
  if (lVar4 != 0) {
    iVar9 = 0;
    do {
      fVar12 = (float)param_3;
      fVar11 = (float)param_2;
      if (*(int *)(lVar4 + 0x18) <= iVar9) {
        if ((bRam0000000005c33e43 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575a2d8);
          bRam0000000005c33e43 = 1;
        }
        if ((*(long *)(param_4 + 0x20) == 0) ||
           (plVar8 = *(long **)(*(long *)(param_4 + 0x20) + 0x18), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar6 == 0) goto LAB_038acb50;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_038acb38;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar9,*(undefined8 *)puVar1);
      fVar10 = (float)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__GetLocalPosition_37ae25c
                                (param_4);
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(puVar2);
        cRam0000000005c230ac = '\x01';
      }
      if (lVar4 == 0) break;
      lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      param_2 = (ulong)(uint)(fVar11 + *(float *)(lVar5 + 0x1c));
      param_3 = (ulong)(uint)(fVar12 + *(float *)(lVar5 + 0x20));
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalPosition_37acac8
                (fVar10 + *(float *)(lVar5 + 0x18),param_2,param_3,lVar4);
      lVar4 = *(long *)(param_4 + 0x48);
      iVar9 = iVar9 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_038acb38:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0575a2d8) {
      puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 5) * 0x10 + 0x138);
      goto LAB_038acb70;
    }
  }
LAB_038acb50:
  puVar3 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_0575a2d8,5);
LAB_038acb70:
                    /* WARNING: Could not recover jumptable at 0x038acb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(0,(float)param_6,0,plVar8,puVar3[1]);
  return;
}


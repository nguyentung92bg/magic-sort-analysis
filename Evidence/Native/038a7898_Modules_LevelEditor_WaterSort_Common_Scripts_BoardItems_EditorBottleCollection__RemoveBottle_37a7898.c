/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$RemoveBottle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__RemoveBottle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$RemoveBottle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__RemoveBottle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector3_o position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__RemoveBottle_37a7898
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000005c33e55 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ee958);
    FUN_012d0dc8(PTR_DAT_057c8358);
    FUN_012d0dc8(PTR_DAT_057e1228);
    FUN_012d0dc8(PTR_DAT_057cc6f0);
    FUN_012d0dc8(PTR_DAT_05779818);
    FUN_012d0dc8(PTR_DAT_05795a80);
    FUN_012d0dc8(PTR_DAT_057c3bb8);
    bRam0000000005c33e55 = 1;
  }
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uVar7 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,param_2,param_3,&lStack_68);
  puVar5 = PTR_DAT_057ee958;
  puVar4 = PTR_DAT_057cc6f0;
  puVar3 = PTR_DAT_057c8358;
  puVar2 = PTR_DAT_057c3bb8;
  puVar1 = PTR_DAT_05779818;
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  if (lVar8 != 0) {
    iVar9 = 0;
    iVar10 = -1;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar9) {
        if (iVar10 == -1) {
          return;
        }
        lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar8,iVar10,*(undefined8 *)puVar2);
        if ((lVar8 != 0) &&
           (System_Collections_Generic_List_object___Remove_21fe044
                      (lVar8,lStack_68,*(undefined8 *)puVar1), lStack_68 != 0)) {
          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
          return;
        }
        break;
      }
      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar8,iVar9,*(undefined8 *)puVar2);
      if (lVar8 == 0) break;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_98,lVar8,*(undefined8 *)puVar4);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      iVar6 = iVar10;
      while (iVar10 = iVar6,
            uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
        iVar6 = iVar9;
        if (lStack_70 != lStack_68) {
          iVar6 = iVar10;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)puVar5);
      lVar8 = *(long *)(param_3 + 0x18);
      iVar9 = iVar9 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$RemoveBottle
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__RemoveBottle (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$RemoveBottle
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__RemoveBottle
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector3_o
   position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__RemoveBottle_37a6094
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar7 = *(long *)(param_3 + 0x48);
                    /* catch() { ... } // from try @ 038a5fbc with catch @ 038a60a0
                       catch() { ... } // from try @ 038a600c with catch @ 038a60a0 */
                    /* try { // try from 038a60a4 to 039a60a7 has its CatchHandler @ 038a60b0 */
  *(undefined1 *)(param_3 + 0x68) = 1;
                    /* try { // try from 038a60a8 to 039a60b3 has its CatchHandler @ 038a5e3c */
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
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
  uVar8 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,param_2,lVar7,&lStack_68);
  puVar5 = PTR_DAT_057ee958;
  puVar4 = PTR_DAT_057cc6f0;
  puVar3 = PTR_DAT_057c8358;
  puVar2 = PTR_DAT_057c3bb8;
  puVar1 = PTR_DAT_05779818;
  if ((uVar8 & 1) == 0) {
    return;
  }
  lVar9 = *(long *)(lVar7 + 0x18);
  if (lVar9 != 0) {
    iVar10 = 0;
    iVar11 = -1;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar10) {
        if (iVar11 == -1) {
          return;
        }
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar9,iVar11,*(undefined8 *)puVar2);
        if ((lVar7 != 0) &&
           (System_Collections_Generic_List_object___Remove_21fe044
                      (lVar7,lStack_68,*(undefined8 *)puVar1), lStack_68 != 0)) {
          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
          return;
        }
        break;
      }
      lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar9,iVar10,*(undefined8 *)puVar2);
      if (lVar9 == 0) break;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_98,lVar9,*(undefined8 *)puVar4);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      iVar6 = iVar11;
      while (iVar11 = iVar6,
            uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
        iVar6 = iVar10;
        if (lStack_70 != lStack_68) {
          iVar6 = iVar11;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)puVar5);
      lVar9 = *(long *)(lVar7 + 0x18);
      iVar10 = iVar10 + 1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


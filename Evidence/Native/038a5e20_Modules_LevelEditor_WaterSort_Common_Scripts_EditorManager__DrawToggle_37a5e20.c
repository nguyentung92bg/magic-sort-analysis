/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawToggle
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawToggle (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawToggle
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawToggle
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawToggle_37a5e20
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_28;
  
  lVar5 = *(long *)(param_3 + 0x48);
  *(undefined1 *)(param_3 + 0x68) = 1;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c33e59 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057745f8);
    FUN_012d0dc8(PTR_DAT_057c2cf0);
    FUN_012d0dc8(PTR_DAT_05797338);
    FUN_012d0dc8(PTR_DAT_0581b3d8);
    FUN_012d0dc8(PTR_DAT_057d7b88);
    bRam0000000005c33e59 = 1;
  }
  lStack_28 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uStack_60 = 0;
  uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,param_2,lVar5,&lStack_28);
  if ((uVar6 & 1) != 0) {
    if (lStack_28 == 0) goto LAB_038a8388;
    uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasAnyBlocker_3ddf448
                      (lStack_28,0);
    if ((uVar6 & 1) != 0) {
      if (lStack_28 == 0) {
LAB_038a8388:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasBlocker_3ddf498
                        (lStack_28,0xe,0);
      puVar4 = PTR_DAT_057c2cf0;
      puVar3 = PTR_DAT_05797338;
      puVar2 = PTR_DAT_057745f8;
      if ((uVar6 & 1) != 0) {
        if ((lStack_28 == 0) || (*(long *)(lStack_28 + 0x68) == 0)) goto LAB_038a8388;
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_78,*(long *)(lStack_28 + 0x68),*(undefined8 *)PTR_DAT_057d7b88);
        uStack_58 = uStack_70;
        uStack_60 = uStack_78;
        plStack_50 = plStack_68;
        while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_60,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
          if (plStack_50 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar2 + 300);
            if ((bVar1 <= *(byte *)(*plStack_50 + 300)) &&
               (*(long *)(*(long *)(*plStack_50 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2))
            {
              Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem__Toggle_37b07e8
                        ();
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_60,*(undefined8 *)puVar4);
              return;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_60,*(undefined8 *)puVar4);
      }
      if (lStack_28 == 0) goto LAB_038a8388;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_28,0);
    }
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddToggleItem_37afbd0
              (lVar5,lStack_28,0);
  }
  return;
}


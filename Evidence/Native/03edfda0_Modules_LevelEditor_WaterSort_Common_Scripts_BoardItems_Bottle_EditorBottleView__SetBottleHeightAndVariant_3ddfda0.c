/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$SetBottleHeightAndVariant
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__SetBottleHeightAndVariant (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this, int32_t height, int32_t variant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$SetBottleHeightAndVariant
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__SetBottleHeightAndVariant
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this,
   int32_t height, int32_t variant, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__SetBottleHeightAndVariant_3ddfda0
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000005c37e60 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05796348);
    FUN_012d0dc8(PTR_DAT_057e00d8);
    FUN_012d0dc8(PTR_DAT_057b6680);
    FUN_012d0dc8(PTR_DAT_05773510);
    bRam0000000005c37e60 = 1;
  }
  puVar2 = PTR_DAT_057e00d8;
  puVar1 = PTR_DAT_05796348;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_68,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_05773510);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_50,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_50,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_40 == 0) break;
      if (*(int *)(lStack_40 + 0x10) == param_2) {
        if (param_2 == 4) {
          if (*(int *)(lStack_40 + 0x78) == 0) {
            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__EnableBottleVisuals_3ddffac
                      (param_1,lStack_40);
          }
          else {
            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__DisableBottleVisuals_3de0020
                      (uVar3,lStack_40);
          }
        }
        else {
          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__EnableBottleVisuals_3ddffac
                    (param_1,lStack_40);
        }
      }
      else {
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__DisableBottleVisuals_3de0020
                  (uVar3,lStack_40);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


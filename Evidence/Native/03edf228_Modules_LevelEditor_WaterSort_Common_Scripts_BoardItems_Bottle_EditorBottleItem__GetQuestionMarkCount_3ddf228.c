/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$GetQuestionMarkCount
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetQuestionMarkCount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$GetQuestionMarkCount
   int32_t
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetQuestionMarkCount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

int Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetQuestionMarkCount_3ddf228
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c37e51 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b630);
    FUN_012d0dc8(PTR_DAT_057894d0);
    FUN_012d0dc8(PTR_DAT_057cc050);
    FUN_012d0dc8(PTR_DAT_05758ad0);
    bRam0000000005c37e51 = 1;
  }
  puVar2 = PTR_DAT_0578b630;
  puVar1 = PTR_DAT_057894d0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_38,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_05758ad0);
  iVar4 = 0;
  while( true ) {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_38,*(undefined8 *)puVar1);
    if ((uVar3 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_38,*(undefined8 *)puVar2);
      return iVar4;
    }
    if (lStack_28 == 0) break;
    if ((*(long *)(lStack_28 + 0x28) != 0) && (*(int *)(*(long *)(lStack_28 + 0x28) + 0x18) == 3)) {
      iVar4 = iVar4 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$OnMosaicItemSpawned
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__OnMosaicItemSpawned (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this, int32_t type, System_Collections_Generic_List_ColorId__o* colorIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$OnMosaicItemSpawned
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__OnMosaicItemSpawned
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this,
   int32_t type, System_Collections_Generic_List_ColorId__o* colorIds, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__OnMosaicItemSpawned_37b4df8
               (long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(int *)(param_1 + 0x58) != param_2) {
    return;
  }
  if ((bRam0000000005c33e83 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f55a8);
    bRam0000000005c33e83 = 1;
  }
  *(long *)(param_1 + 0x50) = param_3;
  FUN_012d0d74((long *)(param_1 + 0x50),param_3);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__SetCount_37b4e10
            (param_1,*(undefined4 *)(param_3 + 0x18));
  if ((bRam0000000005c33e84 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    FUN_012d0dc8(PTR_DAT_05759438);
    FUN_012d0dc8(PTR_DAT_057e0428);
    FUN_012d0dc8(PTR_DAT_057c2298);
    bRam0000000005c33e84 = 1;
  }
  puVar4 = PTR_DAT_057fbae0;
  puVar3 = PTR_DAT_057e0428;
  puVar2 = PTR_DAT_057c2298;
  puVar1 = PTR_DAT_057936b8;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_68,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_0579f3e8);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_50,*(undefined8 *)puVar4), (uVar5 & 1) != 0) {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar6 = UnityEngine_Component__get_gameObject_408b480(lStack_40,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_50,*(undefined8 *)puVar1);
    lVar6 = *(long *)(param_1 + 0x50);
    if (lVar6 != 0) {
      iVar7 = 0;
      while( true ) {
        if (*(int *)(lVar6 + 0x18) <= iVar7) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x48);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x18) <= iVar7) {
          return;
        }
        lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar6,iVar7,*(undefined8 *)puVar2);
        if ((lVar6 == 0) ||
           (lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar6,0), lVar6 == 0)) break;
        UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
        if (*(long *)(param_1 + 0x48) == 0) break;
        lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x48),iVar7,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x50) == 0) break;
        uVar5 = System_Collections_Generic_List_Int32Enum___get_Item_2051860
                          (*(long *)(param_1 + 0x50),iVar7,*(undefined8 *)puVar3);
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__GetColorByColorId_37b50b4
                  (uVar5,uVar5 & 0xffffffff);
        if (lVar6 == 0) break;
        UnityEngine_SpriteRenderer__set_color_4095de0(lVar6,0);
        lVar6 = *(long *)(param_1 + 0x50);
        iVar7 = iVar7 + 1;
        if (lVar6 == 0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$OnUpdatedColors
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnUpdatedColors (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, int32_t mosaicType, System_Collections_Generic_List_ColorId__o* colorIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$OnUpdatedColors
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnUpdatedColors
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this,
   int32_t mosaicType, System_Collections_Generic_List_ColorId__o* colorIds, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnUpdatedColors_37b4624
               (long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000005c33e7b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e6ca8);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c33e7b = 1;
  }
  if (*(int *)(param_1 + 0x40) != param_2) {
    return;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
  if (lVar5 != 0) {
    System_Collections_Generic_List_Int32Enum____ctor_2051418
              (lVar5,param_3,*(undefined8 *)PTR_DAT_057e6ca8);
    plVar8 = (long *)(param_1 + 0x48);
    *plVar8 = lVar5;
    FUN_012d0d74(plVar8,lVar5);
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      lVar7 = *plVar8;
      if ((bRam0000000005c33e83 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057f55a8);
        bRam0000000005c33e83 = 1;
      }
      *(long *)(lVar5 + 0x50) = lVar7;
      FUN_012d0d74((long *)(lVar5 + 0x50),lVar7);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__SetCount_37b4e10
                (lVar5,*(undefined4 *)(lVar7 + 0x18));
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
      if (*(long *)(lVar5 + 0x48) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_68,*(long *)(lVar5 + 0x48),*(undefined8 *)PTR_DAT_0579f3e8);
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        lStack_40 = lStack_58;
        while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_50,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
          if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar7 = UnityEngine_Component__get_gameObject_408b480(lStack_40,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_50,*(undefined8 *)puVar1);
        lVar7 = *(long *)(lVar5 + 0x50);
        if (lVar7 != 0) {
          iVar9 = 0;
          while( true ) {
            if (*(int *)(lVar7 + 0x18) <= iVar9) {
              return;
            }
            lVar7 = *(long *)(lVar5 + 0x48);
            if (lVar7 == 0) break;
            if (*(int *)(lVar7 + 0x18) <= iVar9) {
              return;
            }
            lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar7,iVar9,*(undefined8 *)puVar2);
            if ((lVar7 == 0) ||
               (lVar7 = UnityEngine_Component__get_gameObject_408b480(lVar7,0), lVar7 == 0)) break;
            UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
            if (*(long *)(lVar5 + 0x48) == 0) break;
            lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(lVar5 + 0x48),iVar9,*(undefined8 *)puVar2);
            if (*(long *)(lVar5 + 0x50) == 0) break;
            uVar6 = System_Collections_Generic_List_Int32Enum___get_Item_2051860
                              (*(long *)(lVar5 + 0x50),iVar9,*(undefined8 *)puVar3);
            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__GetColorByColorId_37b50b4
                      (uVar6,uVar6 & 0xffffffff);
            if (lVar7 == 0) break;
            UnityEngine_SpriteRenderer__set_color_4095de0(lVar7,0);
            lVar7 = *(long *)(lVar5 + 0x50);
            iVar9 = iVar9 + 1;
            if (lVar7 == 0) break;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


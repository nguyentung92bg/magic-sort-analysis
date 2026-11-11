/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemPairs$$GenerateItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemPairs__GenerateItem (int32_t itemType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemPairs$$GenerateItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemPairs__GenerateItem
   (int32_t itemType, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemPairs__GenerateItem_3ddcde0
               (undefined4 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uStack_14;
  
  if ((bRam0000000005c37e41 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05799bc0);
    FUN_012d0dc8(PTR_DAT_057f2f40);
    FUN_012d0dc8(PTR_DAT_05795bb8);
    FUN_012d0dc8(PTR_DAT_05760f18);
    FUN_012d0dc8(PTR_DAT_057f9160);
    FUN_012d0dc8(PTR_DAT_05803860);
    FUN_012d0dc8(PTR_DAT_057d86d0);
    FUN_012d0dc8(PTR_DAT_0576a680);
    FUN_012d0dc8(PTR_DAT_057cba38);
    FUN_012d0dc8(PTR_DAT_05801f38);
    FUN_012d0dc8(PTR_DAT_05819150);
    FUN_012d0dc8(PTR_DAT_057a9fd0);
    FUN_012d0dc8(PTR_DAT_057f56f0);
    FUN_012d0dc8(PTR_DAT_057e30d0);
    FUN_012d0dc8(PTR_DAT_05790308);
    FUN_012d0dc8(PTR_DAT_05784860);
    FUN_012d0dc8(PTR_DAT_05801160);
    FUN_012d0dc8(PTR_DAT_057ab500);
    FUN_012d0dc8(PTR_DAT_05781ad8);
    FUN_012d0dc8(PTR_DAT_0579f160);
    FUN_012d0dc8(PTR_DAT_057745f8);
    FUN_012d0dc8(PTR_DAT_057e0268);
    FUN_012d0dc8(PTR_DAT_05815588);
    FUN_012d0dc8(PTR_DAT_057c5158);
    bRam0000000005c37e41 = 1;
  }
  switch(param_1) {
  case 1:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f2f40);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem___ctor_37ae05c(lVar1,0);
      return lVar1;
    }
    break;
  case 2:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e0268);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem___ctor_37b2484
                (lVar1,0);
      return lVar1;
    }
    break;
  case 3:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05801160);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkItem___ctor_37b39e4
                (lVar1,0);
      return lVar1;
    }
    break;
  case 4:
    puVar5 = (undefined8 *)PTR_DAT_057f9160;
    goto code_r0x03edd168;
  case 5:
    puVar5 = (undefined8 *)PTR_DAT_05760f18;
    goto code_r0x03edd168;
  case 6:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05784860);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem___ctor_37b3d08
                (lVar1,0);
      return lVar1;
    }
    break;
  case 7:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0579f160);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem___ctor_37b2b68
                (lVar1,0);
      return lVar1;
    }
    break;
  case 8:
    puVar5 = (undefined8 *)PTR_DAT_05819150;
    goto code_r0x03edd168;
  case 9:
    puVar5 = (undefined8 *)PTR_DAT_05801f38;
    goto code_r0x03edd168;
  case 10:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05815588);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem___ctor_37b189c
                (lVar1,0);
      return lVar1;
    }
    break;
  case 0xb:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c5158);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyItem___ctor_37b1a9c
                (lVar1,0);
      return lVar1;
    }
    break;
  case 0xc:
    puVar5 = (undefined8 *)PTR_DAT_05795bb8;
    goto code_r0x03edd168;
  default:
    uStack_14 = param_1;
    uVar2 = thunk_FUN_0136d790(PTR_DAT_0578ae98);
    uVar2 = thunk_FUN_01320a8c(uVar2,&uStack_14);
    thunk_FUN_0136d790(PTR_DAT_057b2d58);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar4 = thunk_FUN_0136d790(PTR_DAT_057d2200);
    System_ArgumentOutOfRangeException___ctor_21221d0(uVar3,uVar4,uVar2,0,0);
    uVar2 = thunk_FUN_0136d790(PTR_DAT_0580dd90);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar3,uVar2);
  case 0xe:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057745f8);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem___ctor_37b27c8
                (lVar1,0);
      return lVar1;
    }
    break;
  case 0xf:
    puVar5 = (undefined8 *)PTR_DAT_057f56f0;
    goto code_r0x03edd168;
  case 0x10:
    puVar5 = (undefined8 *)PTR_DAT_057cba38;
    goto code_r0x03edd168;
  case 0x11:
    puVar5 = (undefined8 *)PTR_DAT_057e30d0;
    goto code_r0x03edd168;
  case 0x12:
    puVar5 = (undefined8 *)PTR_DAT_057d86d0;
    goto code_r0x03edd168;
  case 0x13:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05803860);
    if (lVar1 != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_EditorDuck_EditorDuckHouseItem___ctor_230a408
                (lVar1,0);
      return lVar1;
    }
    break;
  case 0x14:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781ad8);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem___ctor_37b3500
                (lVar1,0);
      return lVar1;
    }
    break;
  case 0x17:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05799bc0);
    if (lVar1 == 0) break;
    *(undefined1 *)(lVar1 + 0x29) = 1;
    goto code_r0x03edd178;
  case 0x18:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576a680);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem___ctor_37ade74
                (lVar1,0);
      return lVar1;
    }
    break;
  case 0x19:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057ab500);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_Rainbow_EditorRainbowItem___ctor_37acb9c(lVar1,0)
      ;
      return lVar1;
    }
    break;
  case 0x1a:
    puVar5 = (undefined8 *)PTR_DAT_057a9fd0;
code_r0x03edd168:
    lVar1 = thunk_FUN_01320e48(*puVar5);
    if (lVar1 != 0) {
code_r0x03edd178:
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorABlockerItem___ctor_37acba4
                (lVar1,0);
      return lVar1;
    }
    break;
  case 0x1b:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05790308);
    if (lVar1 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem___ctor_37b4b20
                (lVar1,0);
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnDrawBoardItemInputEvent
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnDrawBoardItemInputEvent (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, int32_t itemType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnDrawBoardItemInputEvent
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnDrawBoardItemInputEvent
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, int32_t itemType,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnDrawBoardItemInputEvent_37a4a40
               (long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000005c33e0b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5610);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c33e0b = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                        (*(long *)(param_1 + 0x70),0);
    uVar7 = auVar13._8_8_;
    uVar6 = auVar13._0_8_;
    *(undefined4 *)(param_1 + 0x2c) = 4;
    *(undefined4 *)(param_1 + 0x44) = param_2;
    puVar5 = PTR_DAT_057d5610;
    puVar4 = PTR_DAT_0576aae0;
    switch(param_2) {
    case 2:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
         (lVar12 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar12 != 0)) {
        lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar12,*(undefined8 *)puVar5);
        lVar11 = *(long *)(param_1 + 0x38);
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar11 == 0) {
          if (lVar12 == 0) break;
          lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetBlackColorAndColorId_2307e58
                             (lVar12,0);
        }
        if (lVar10 != 0) {
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetWaterItem_3ddb278
                            (lVar10,0,1,0,lVar11,0,0,0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 3:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      lVar12 = *(long *)(param_1 + 0x18);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar12 != 0) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetQuestionMarkItem_3ddb368
                          (*puVar8,puVar8[1],puVar8[2],lVar12,0,*(undefined8 *)(param_1 + 0x38),0);
FUN_012d0d74:
        puVar9 = (undefined8 *)(param_1 + 0x58);
        *puVar9 = uVar6;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
      break;
    case 4:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
         (lVar12 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar12 != 0)) {
        lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar12,*(undefined8 *)puVar5);
        lVar11 = *(long *)(param_1 + 0x38);
        if (lVar11 == 0) {
          if (lVar12 == 0) break;
          lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetBlackColorAndColorId_2307e58
                             (lVar12,0);
        }
        if (*(long *)(param_1 + 0x70) != 0) {
          auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                              (*(long *)(param_1 + 0x70),0);
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetCurtainItem_3ddb450
                              (0,0,0,*(long *)(param_1 + 0x18),0,auVar13._0_8_,auVar13._8_8_,0,
                               lVar11,0);
            goto FUN_012d0d74;
          }
        }
      }
      break;
    case 5:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetClayItem_3ddb6f8
                            (0,0,0,*(long *)(param_1 + 0x18),0,auVar13._0_8_,auVar13._8_8_,0,0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 6:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetPlasterItem_3ddb5f8
                            (0,0,0,*(long *)(param_1 + 0x18),0,auVar13._0_8_,auVar13._8_8_,0,0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 7:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
           (lVar12 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar12 != 0)) {
          lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar12,*(undefined8 *)puVar5);
          lVar11 = *(long *)(param_1 + 0x38);
          if (lVar11 == 0) {
            if (lVar12 == 0) break;
            lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetBlackColorAndColorId_2307e58
                               (lVar12,0);
          }
          lVar12 = *(long *)(param_1 + 0x18);
          if (cRam0000000005c230aa == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230aa = '\x01';
          }
          if (lVar12 != 0) {
            puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
            uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetTagItem_3ddb878
                              (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,
                               lVar11,0);
            goto FUN_012d0d74;
          }
        }
      }
      break;
    case 8:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetIceItem_3ddb980
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,0,auVar13._0_8_,auVar13._8_8_,
                             *(undefined4 *)(param_1 + 0x4c),0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 9:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetGeneratorItem_3ddba84
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,0,0)
          ;
          goto FUN_012d0d74;
        }
      }
      break;
    case 10:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      lVar12 = *(long *)(param_1 + 0x18);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar12 != 0) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetWoodboxItem_3ddbb70
                          (*puVar8,puVar8[1],puVar8[2],lVar12,0,0,0,0,
                           *(undefined4 *)(param_1 + 0x48),0);
        goto FUN_012d0d74;
      }
      break;
    case 0xb:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      lVar12 = *(long *)(param_1 + 0x18);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar12 != 0) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetWoodboxKeyItem_3ddbc60
                          (*puVar8,puVar8[1],puVar8[2],lVar12,0,0,0,0,0,
                           *(undefined4 *)(param_1 + 0x48),0);
        goto FUN_012d0d74;
      }
      break;
    case 0xc:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      lVar12 = *(long *)(param_1 + 0x18);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar12 != 0) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetCarpetItem_3ddbd60
                          (*puVar8,puVar8[1],puVar8[2],lVar12,0,0,0,0,
                           *(undefined4 *)(param_1 + 0x4c),0);
        goto FUN_012d0d74;
      }
      break;
    default:
      return;
    case 0xe:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      lVar12 = *(long *)(param_1 + 0x18);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar12 != 0) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetToggleItem_3ddbeb8
                          (*puVar8,puVar8[1],puVar8[2],lVar12,0,uVar6,uVar7,0,0,0);
        goto FUN_012d0d74;
      }
      break;
    case 0xf:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
         (lVar12 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar12 != 0)) {
        lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar12,*(undefined8 *)puVar5);
        lVar11 = *(long *)(param_1 + 0x38);
        if (lVar11 == 0) {
          if (lVar12 == 0) break;
          lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetBlackColorAndColorId_2307e58
                             (lVar12,0);
        }
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetIvyItem_3ddbfb4
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,uVar6,uVar7,0,lVar11,0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 0x10:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                  (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetFrogItem_3ddc0ac
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,uVar6,uVar7,0,
                             *(undefined4 *)(param_1 + 0x4c),0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 0x11:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      lVar12 = *(long *)(param_1 + 0x18);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar12 != 0) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetMagicSeal_3ddc1a4
                          (*puVar8,puVar8[1],puVar8[2],lVar12,0,uVar6,uVar7,0,0,0);
        goto FUN_012d0d74;
      }
      break;
    case 0x12:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetDuckItem_3ddc294
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,0,
                             *(undefined4 *)(param_1 + 0x4c),0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 0x13:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetDuckHouseItem_3ddc404
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,
                             *(undefined4 *)(param_1 + 0x4c),0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 0x14:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetSafeItem_3ddc500
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,1,
                             *(undefined4 *)(param_1 + 0x4c),0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 0x17:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetBagItem_3ddc60c
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,1,0)
          ;
          goto FUN_012d0d74;
        }
      }
      break;
    case 0x18:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetFireworkItem_3ddc8e8
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,0,0)
          ;
          goto FUN_012d0d74;
        }
      }
      break;
    case 0x19:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetRainbowItem_3ddc9f4
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,0);
          goto FUN_012d0d74;
        }
      }
      break;
    case 0x1a:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      lVar12 = *(long *)(param_1 + 0x18);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar12 != 0) {
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetIcicleItem_3ddcaf8
                          (*puVar8,puVar8[1],puVar8[2],lVar12,0,uVar6,uVar7,0,0,0);
        goto FUN_012d0d74;
      }
      break;
    case 0x1b:
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                (param_1);
      if (*(long *)(param_1 + 0x70) != 0) {
        auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x70),0);
        lVar12 = *(long *)(param_1 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar12 != 0) {
          puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetMosaicItem_3ddc7dc
                            (*puVar8,puVar8[1],puVar8[2],lVar12,0,auVar13._0_8_,auVar13._8_8_,0,0,
                             *(undefined4 *)(param_1 + 0x4c),0);
          goto FUN_012d0d74;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


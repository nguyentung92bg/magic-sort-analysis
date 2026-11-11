/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs.WaterViewConfig$$GetWaterPivotPositionsByBottleHeight
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterPivotPositionsByBottleHeight_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig_o* __this, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs.WaterViewConfig$$GetWaterPivotPositionsByBottleHeight
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterPivotPositionsByBottleHeight_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig_o* __this, int32_t
   bottleHeight, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
               (long param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2b281 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05761178);
    FUN_012d0dc8(PTR_DAT_057bddc0);
    FUN_012d0dc8(PTR_DAT_0577ce70);
    FUN_012d0dc8(PTR_DAT_057e8d80);
    FUN_012d0dc8(PTR_DAT_057cc838);
    FUN_012d0dc8(PTR_DAT_05799070);
    FUN_012d0dc8(PTR_DAT_05786a28);
    FUN_012d0dc8(PTR_DAT_0578b450);
    bRam0000000005c2b281 = 1;
  }
  puVar8 = PTR_DAT_057e8d80;
  puVar7 = PTR_DAT_057bddc0;
  puVar6 = PTR_DAT_05799070;
  puVar5 = PTR_DAT_0578b450;
  puVar4 = PTR_DAT_05786a28;
  puVar3 = PTR_DAT_05761178;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057cc838);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_70,*(undefined8 *)puVar7), lVar10 = lStack_60,
          (uVar9 & 1) != 0) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(int *)(lStack_60 + 0x10) == param_2) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar3);
        return lVar10;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar3);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar10 != 0) {
      System_Object___ctor_23dfe5c(lVar10,0);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar11 != 0) {
        System_Collections_Generic_List_WaterPivotPosition____ctor_2530c8c
                  (lVar11,*(undefined8 *)puVar6);
        plVar14 = (long *)(lVar10 + 0x18);
        *plVar14 = lVar11;
        FUN_012d0d74(plVar14,lVar11);
        *(int *)(lVar10 + 0x10) = param_2;
        uVar2 = _UNK_0438e914;
        if (param_2 < 0) {
          return lVar10;
        }
        iVar15 = 0;
        while (lVar11 = *plVar14, lVar11 != 0) {
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar13 = *(long *)puVar8;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) break;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar1 * 8;
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar12 + 0x20) = 0x3f449ba6;
            *(float *)(lVar12 + 0x24) = (float)iVar15;
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))(uVar2);
          }
          iVar15 = iVar15 + 1;
          if (param_2 < iVar15) {
            return lVar10;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


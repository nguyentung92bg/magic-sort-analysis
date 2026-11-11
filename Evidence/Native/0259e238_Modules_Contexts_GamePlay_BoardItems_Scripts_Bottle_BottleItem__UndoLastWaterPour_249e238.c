/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UndoLastWaterPour
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterPour (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t waterHeight, int32_t topWaterColorId, bool isRainbow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UndoLastWaterPour
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterPour
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t waterHeight,
   int32_t topWaterColorId, bool isRainbow, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterPour_249e238
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWater_249ce6c();
  lVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
                    (param_1);
  if (lVar2 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
              (lVar2,0,0);
  }
  if ((bRam0000000005c2b30f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b30f = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(long *)(lVar2 + 0x20) != 0) {
        if (((*(long *)(param_1 + 0x80) == 0) ||
            (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_1 + 0x80),iVar3,*(undefined8 *)puVar1), lVar2 == 0))
           || (*(long *)(lVar2 + 0x20) == 0)) break;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetDirectionValues_1e9e7dc
                  (*(long *)(lVar2 + 0x20),1,0);
      }
      lVar2 = *(long *)(param_1 + 0x80);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


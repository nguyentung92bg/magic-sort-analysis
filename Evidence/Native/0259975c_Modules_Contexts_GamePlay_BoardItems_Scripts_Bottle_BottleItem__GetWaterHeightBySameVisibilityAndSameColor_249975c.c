/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWaterHeightBySameVisibilityAndSameColor
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterHeightBySameVisibilityAndSameColor (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t j, int32_t currentColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWaterHeightBySameVisibilityAndSameColor
   int32_t
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterHeightBySameVisibilityAndSameColor
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t j, int32_t
   currentColorId, const MethodInfo* method); */

int Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterHeightBySameVisibilityAndSameColor_249975c
              (long param_1,int param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam0000000005c2b2f1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2f1 = 1;
  }
  puVar2 = PTR_DAT_057f2468;
  if ((((*(long *)(param_1 + 0x80) != 0) &&
       (lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x80),param_2,*(undefined8 *)PTR_DAT_057f2468),
       lVar4 != 0)) && (*(long *)(lVar4 + 0x20) != 0)) &&
     (lVar5 = *(long *)(param_1 + 0x80), lVar5 != 0)) {
    cVar1 = *(char *)(*(long *)(lVar4 + 0x20) + 0x54);
    iVar6 = 1;
    while( true ) {
      iVar3 = param_2 + iVar6;
      if (*(int *)(lVar5 + 0x18) <= iVar3) {
        return iVar6;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar3,*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
      if (*(long *)(lVar4 + 0x20) == 0) {
        return iVar6;
      }
      if (((*(long *)(param_1 + 0x80) == 0) ||
          (lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (*(long *)(param_1 + 0x80),iVar3,*(undefined8 *)puVar2), lVar4 == 0))
         || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) break;
      iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                        (lVar4,0);
      if (iVar3 != param_3) {
        return iVar6;
      }
      if ((cVar1 != '\0') == (*(char *)(lVar4 + 0x54) == '\0')) {
        return iVar6;
      }
      lVar5 = *(long *)(param_1 + 0x80);
      iVar6 = iVar6 + 1;
      if (lVar5 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


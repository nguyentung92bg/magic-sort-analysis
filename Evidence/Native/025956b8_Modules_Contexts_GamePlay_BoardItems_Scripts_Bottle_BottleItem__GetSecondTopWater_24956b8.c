/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetSecondTopWater
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetSecondTopWater
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
          (long param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0259567c with catch @ 025956b8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02595684 with catch @ 025956bc
                        */
  if ((bRam0000000005c2b2ce & 1) == 0) {
                    /* try { // try from 025956d4 to 026956eb has its CatchHandler @ 0259579c */
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ce = 1;
  }
                    /* try { // try from 025956ec to 02695707 has its CatchHandler @ 02595658 */
  uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c(param_1);
  if ((uVar4 & 1) == 0) {
    iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopFilledCellIndex_2495814
                      (param_1);
    lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (param_1);
    puVar2 = PTR_DAT_057f2468;
                    /* try { // try from 02595708 to 0269571f has its CatchHandler @ 0259579c */
    if (-1 < iVar3) {
      do {
                    /* try { // try from 02595720 to 0269578b has its CatchHandler @ 02595658 */
        if ((*(long *)(param_1 + 0x80) == 0) ||
           (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x80),iVar3,*(undefined8 *)puVar2), lVar6 == 0))
        {
LAB_02595778:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (lVar5 != *(long *)(lVar6 + 0x20)) {
          if ((*(long *)(param_1 + 0x80) != 0) &&
             (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (*(long *)(param_1 + 0x80),iVar3,*(undefined8 *)puVar2), lVar5 != 0)
             ) {
            return *(undefined8 *)(lVar5 + 0x20);
          }
          goto LAB_02595778;
        }
        bVar1 = 0 < iVar3;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
  }
  return 0;
}


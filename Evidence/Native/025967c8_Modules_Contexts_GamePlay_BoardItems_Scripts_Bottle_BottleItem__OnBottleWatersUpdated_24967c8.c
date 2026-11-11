/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBottleWatersUpdated
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleWatersUpdated (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* topWaterItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBottleWatersUpdated
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleWatersUpdated
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* topWaterItem, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleWatersUpdated_24967c8
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000005c2b2d6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d788);
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_057db9e8);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2d6 = 1;
  }
  puVar6 = PTR_DAT_05802430;
  puVar5 = PTR_DAT_057f9000;
  puVar4 = PTR_DAT_057f2468;
  puVar3 = PTR_DAT_057db9e8;
  puVar2 = PTR_DAT_0576d788;
  puVar1 = PTR_DAT_05763bd8;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  lVar7 = *(long *)(param_1 + 0x80);
  if (lVar7 != 0) {
                    /* try { // try from 02596888 to 026968c7 has its CatchHandler @ 02596888
                       catch() { ... } // from try @ 02596888 with catch @ 02596888
                       catch() { ... } // from try @ 025968f4 with catch @ 02596888
                       catch() { ... } // from try @ 0259692c with catch @ 02596888
                       catch() { ... } // from try @ 02596974 with catch @ 02596888 */
    iVar10 = 0;
    while (iVar10 < *(int *)(lVar7 + 0x18)) {
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar10,*(undefined8 *)puVar4);
                    /* try { // try from 025968c8 to 026968d7 has its CatchHandler @ 02596934 */
      if (lVar7 == 0) goto LAB_02596a5c;
      if (*(long *)(lVar7 + 0x20) != 0) {
        if ((*(long *)(param_1 + 0x80) == 0) ||
           (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x80),iVar10,*(undefined8 *)puVar4), lVar7 == 0))
        goto LAB_02596a5c;
                    /* try { // try from 025968ec to 026968f3 has its CatchHandler @ 02596930 */
        if (*(long *)(lVar7 + 0x30) != 0) {
                    /* try { // try from 025968f4 to 02696927 has its CatchHandler @ 02596888 */
          if (((*(long *)(param_1 + 0x80) == 0) ||
              (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (*(long *)(param_1 + 0x80),iVar10,*(undefined8 *)puVar4),
              lVar7 == 0)) || (plVar8 = *(long **)(lVar7 + 0x30), plVar8 == (long *)0x0))
          goto LAB_02596a5c;
          (**(code **)(*plVar8 + 0x218))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x220));
        }
      }
                    /* try { // try from 02596928 to 0269692b has its CatchHandler @ 0259692c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02596928 with catch @ 0259692c
                       try { // try from 0259692c to 0269694b has its CatchHandler @ 02596888 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025968ec with catch @ 02596930
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025968c8 with catch @ 02596934
                        */
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x80),iVar10,*(undefined8 *)puVar4), lVar7 == 0))
      goto LAB_02596a5c;
      if (*(long *)(lVar7 + 0x38) != 0) {
                    /* try { // try from 0259694c to 0269694f has its CatchHandler @ 0259695c */
                    /* catch() { ... } // from try @ 0259694c with catch @ 0259695c */
                    /* try { // try from 02596968 to 02696973 has its CatchHandler @ 02596988 */
        if (((*(long *)(param_1 + 0x80) == 0) ||
            (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_1 + 0x80),iVar10,*(undefined8 *)puVar4), lVar7 == 0)
            ) || (lVar7 = System_Linq_Enumerable__ToList_object__242f814
                                    (*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)puVar2),
                 lVar7 == 0)) goto LAB_02596a5c;
                    /* try { // try from 02596974 to 0269697f has its CatchHandler @ 02596888 */
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_98,lVar7,*(undefined8 *)puVar3);
                    /* try { // try from 02596980 to 02696987 has its CatchHandler @ 02596988 */
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02596968 with catch @ 02596988
                       catch(type#2 @ 00000000) { ... } // from try @ 02596980 with catch @ 02596988
                        */
        plStack_70 = plStack_88;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_80,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
          if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          (**(code **)(*plStack_70 + 0x218))
                    (plStack_70,param_2,*(undefined8 *)(*plStack_70 + 0x220));
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)puVar5);
      }
      lVar7 = *(long *)(param_1 + 0x80);
      iVar10 = iVar10 + 1;
      if (lVar7 == 0) goto LAB_02596a5c;
    }
    lVar7 = *(long *)(param_1 + 0x88);
    if (lVar7 != 0) {
      iVar10 = 0;
      goto LAB_02596a20;
    }
  }
  goto LAB_02596a5c;
  while( true ) {
    (**(code **)(*plVar8 + 0x218))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x220));
    lVar7 = *(long *)(param_1 + 0x88);
    iVar10 = iVar10 + 1;
    if (lVar7 == 0) break;
LAB_02596a20:
    if (*(int *)(lVar7 + 0x18) <= iVar10) {
      return;
    }
    plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar7,iVar10,*(undefined8 *)puVar6);
    if (plVar8 == (long *)0x0) break;
  }
LAB_02596a5c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


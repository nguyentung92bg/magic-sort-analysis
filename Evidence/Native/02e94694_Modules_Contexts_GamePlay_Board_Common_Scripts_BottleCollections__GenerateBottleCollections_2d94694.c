/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$GenerateBottleCollections
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollections (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* levelAndLevelConfigModel, bool isDaily, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$GenerateBottleCollections
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollections
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   levelAndLevelConfigModel, bool isDaily, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollections_2d94694
               (long param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 uVar15;
  
                    /* try { // try from 02e9469c to 02f9469f has its CatchHandler @ 02e94720 */
  if ((bRam0000000005c2f9f4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e5990);
    FUN_012d0dc8(PTR_DAT_0579f248);
    FUN_012d0dc8(PTR_DAT_057a0df8);
                    /* try { // try from 02e946e4 to 02f9470b has its CatchHandler @ 02e9472c */
    FUN_012d0dc8(PTR_DAT_0579e730);
    bRam0000000005c2f9f4 = 1;
  }
  puVar6 = PTR_DAT_057e5990;
  puVar5 = PTR_DAT_0579e730;
  if (param_2 == 0) goto LAB_02e948c4;
  lVar8 = *(long *)(param_2 + 0x18);
                    /* try { // try from 02e9470c to 02f94717 has its CatchHandler @ 02e941d4 */
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x44) == '\0')) {
    if (*(long *)(param_2 + 0x28) == 0) goto LAB_02e948c4;
    uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x28);
    if ((param_3 & 1) == 0) {
      if (lVar8 == 0) goto LAB_02e948c4;
      uVar7 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__GetLevelDifficulty_1e8d25c
                        (lVar8,0);
      uVar10 = 0;
    }
    else {
      uVar7 = 0;
      uVar10 = 1;
    }
    uVar15 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollection_2d948c8
                       (uVar15,uVar10,uVar7);
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar8 == 0) goto LAB_02e948c4;
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar11 = *(long *)puVar6;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_02e948c4;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
      FUN_012d0d74();
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(lVar8);
    }
  }
  else {
    lVar8 = *(long *)(param_2 + 0x30);
                    /* try { // try from 02e94718 to 02f9471f has its CatchHandler @ 02e9472c */
    if (lVar8 == 0) goto LAB_02e948c4;
                    /* catch() { ... } // from try @ 02e9469c with catch @ 02e94720 */
    if (0 < *(int *)(lVar8 + 0x18)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02e946e4 with catch @ 02e9472c
                       catch(type#2 @ 00000000) { ... } // from try @ 02e94718 with catch @ 02e9472c
                        */
      iVar14 = 0;
      do {
        lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar8,iVar14,*(undefined8 *)puVar5);
        if ((lVar9 == 0) || (*(long *)(param_2 + 0x18) == 0)) goto LAB_02e948c4;
        uVar15 = *(undefined8 *)(lVar9 + 0x28);
        uVar7 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__GetLevelDifficulty_1e8d25c
                          (*(long *)(param_2 + 0x18),0);
        uVar15 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollection_2d948c8
                           (uVar15,param_3 & 1,uVar7);
        lVar9 = *(long *)(param_1 + 0x18);
        if (lVar9 == 0) goto LAB_02e948c4;
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)puVar6;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_02e948c4;
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))(lVar9);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar8 + 0x18));
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                        *(undefined8 *)PTR_DAT_057a0df8);
    puVar13 = (undefined8 *)(param_1 + 0x10);
    *puVar13 = uVar15;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar13 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
LAB_02e948c4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


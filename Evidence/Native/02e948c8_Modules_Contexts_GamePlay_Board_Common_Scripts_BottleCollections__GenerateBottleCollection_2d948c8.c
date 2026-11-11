/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$GenerateBottleCollection
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollection (System_Collections_Generic_List_BottleItemModel__o* bottleModels, bool isDaily, int32_t levelDifficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$GenerateBottleCollection
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollection
   (System_Collections_Generic_List_BottleItemModel__o* bottleModels, bool isDaily, int32_t
   levelDifficultyType, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GenerateBottleCollection_2d948c8
               (undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2f9f5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f38d8);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c2f9f5 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_057a1e60), puVar1 = PTR_DAT_057f38d8,
     plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_02e949c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_02e949c0:
    iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection___ctor_2f54ef0
                (lVar3,iVar2 < 0xf,param_2 & 1,0);
      Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GenerateBottles_2f63688
                (lVar3,param_1,0x1e < iVar2,param_3,0);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$AddBatches
void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__AddBatches (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, System_Collections_Generic_List_LevelBatch__o* listOfBatch, int32_t toLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$AddBatches
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__AddBatches
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this,
   System_Collections_Generic_List_LevelBatch__o* listOfBatch, int32_t toLevel, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__AddBatches_1e8a7e8
               (long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  if ((bRam0000000005c280fc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1ce8);
    FUN_012d0dc8(PTR_DAT_057c7458);
    FUN_012d0dc8(PTR_DAT_057d5da0);
    bRam0000000005c280fc = 1;
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) <= param_3) {
    iVar8 = param_3;
  }
  *(int *)(param_1 + 0x18) = iVar8;
  puVar3 = PTR_DAT_057d5da0;
  puVar2 = PTR_DAT_057a1ce8;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar8 = 0;
      do {
        uVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_2,iVar8,*(undefined8 *)puVar3);
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == 0) goto LAB_01f8a900;
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_01f8a900;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))(lVar5);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_2 + 0x18));
    }
    return;
  }
LAB_01f8a900:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


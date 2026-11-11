/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetLevelType
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelType (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetLevelType
   System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelType
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method); */

undefined8 Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelType_1f19570(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2864d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_0576d3d0);
    FUN_012d0dc8(PTR_DAT_0581b640);
    FUN_012d0dc8(PTR_DAT_057f2500);
    bRam0000000005c2864d = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_057a1e60), plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0201966c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_0201966c:
    iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar1 = PTR_DAT_0576d3d0;
    puVar5 = (undefined8 *)PTR_DAT_057f2500;
    if (iVar2 != 1) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_020196e8;
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
      puVar5 = (undefined8 *)PTR_DAT_0581b640;
      if (lVar3 != 0) {
        uStack_28 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__GetLevelDifficulty_1e8d25c
                              (lVar3,0);
        uStack_38 = *(undefined8 *)puVar1;
        uStack_30 = 0xffffffffffffffff;
        uVar6 = System_Enum__ToString_23a4eac(&uStack_38,0);
        return uVar6;
      }
    }
    return *puVar5;
  }
LAB_020196e8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetRainbowUsagesShorten
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetRainbowUsagesShorten (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetRainbowUsagesShorten
   System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetRainbowUsagesShorten
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetRainbowUsagesShorten_1f1a688
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar1 = PTR_DAT_05779a08;
  if ((bRam0000000005c28650 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fec00);
    FUN_012d0dc8(PTR_DAT_057d88b0);
    FUN_012d0dc8(PTR_DAT_057c7120);
    FUN_012d0dc8(PTR_DAT_057b5448);
    FUN_012d0dc8(PTR_DAT_05779a08);
    bRam0000000005c28650 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  plVar6 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (plVar6 != (long *)0x0) {
    System_Text_StringBuilder___ctor_1e51c94(plVar6,0);
    puVar2 = PTR_DAT_057fec00;
    puVar1 = PTR_DAT_057d88b0;
    if (*(long *)(param_1 + 0x110) != 0) {
      System_Collections_Generic_List_LevelStats_RainbowUsage___GetEnumerator_2844bb4
                (&uStack_70,*(long *)(param_1 + 0x110),*(undefined8 *)PTR_DAT_057b5448);
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      uStack_38 = uStack_58;
      uStack_40 = uStack_60;
      while (uVar7 = System_Collections_Generic_List_Enumerator_LevelStats_RainbowUsage___MoveNext_3c6d9b8
                               (&uStack_50,*(undefined8 *)puVar1), uVar4 = uStack_38,
            uVar3 = uStack_40, (uVar7 & 1) != 0) {
        iVar5 = System_Text_StringBuilder__get_Length_1e4bb10(plVar6,0);
        if (99 < iVar5) break;
        iVar5 = System_Text_StringBuilder__get_Length_1e4bb10(plVar6,0);
        if (0 < iVar5) {
          System_Text_StringBuilder__Append_1e4b238(plVar6,0x2c,0);
        }
        System_Text_StringBuilder__Append_1e4b238(plVar6,(int)uVar3 + 0x61,0);
        System_Text_StringBuilder__Append_1e4b238(plVar6,(int)((ulong)uVar3 >> 0x20) + 0x61,0);
        System_Text_StringBuilder__Append_1e540f8(plVar6,uVar4 & 0xffffffff,0);
      }
      System_Collections_Generic_List_Enumerator_LevelStats_RainbowUsage___Dispose_3c6d9b4
                (&uStack_50,*(undefined8 *)puVar2);
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


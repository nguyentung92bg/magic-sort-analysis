/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetMovesShorten
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetMovesShorten (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetMovesShorten
   System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetMovesShorten
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetMovesShorten_1f19f20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_05779a08;
  if ((bRam0000000005c2864f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580af70);
    FUN_012d0dc8(PTR_DAT_057f9758);
    FUN_012d0dc8(PTR_DAT_057fb658);
    FUN_012d0dc8(PTR_DAT_057690c0);
    FUN_012d0dc8(PTR_DAT_05779a08);
    bRam0000000005c2864f = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plVar5 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (plVar5 != (long *)0x0) {
    System_Text_StringBuilder___ctor_1e51c94(plVar5,0);
    puVar2 = PTR_DAT_0580af70;
    puVar1 = PTR_DAT_057f9758;
    if (*(long *)(param_1 + 0x100) != 0) {
      System_Collections_Generic_List_int___GetEnumerator_204fcb0
                (&uStack_68,*(long *)(param_1 + 0x100),*(undefined8 *)PTR_DAT_057690c0);
      uStack_48 = uStack_60;
      uStack_50 = uStack_68;
      uStack_40 = uStack_58;
      while (uVar6 = System_Collections_Generic_List_Enumerator_int___MoveNext_41d2ec0
                               (&uStack_50,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
        iVar3 = (int)uStack_40;
        iVar4 = System_Text_StringBuilder__get_Length_1e4bb10(plVar5,0);
        if (99 < iVar4) break;
        System_Text_StringBuilder__Append_1e4b238(plVar5,iVar3 + 0x61,0);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose_41d2ebc
                (&uStack_50,*(undefined8 *)puVar2);
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


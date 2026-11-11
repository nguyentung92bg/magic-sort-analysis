/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FileByteReaderWorker$$.ctor
void Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker___ctor (Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FileByteReaderWorker$$.ctor
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker___ctor
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker___ctor_411b724
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iStack_24;
  
  puVar1 = PTR_DAT_057783e0;
  if ((bRam0000000005c3ac42 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05767590);
    FUN_012d0dc8(PTR_DAT_05779970);
    FUN_012d0dc8(PTR_DAT_057acf08);
    FUN_012d0dc8(PTR_DAT_057783e0);
    FUN_012d0dc8(PTR_DAT_0575ad60);
    FUN_012d0dc8(PTR_DAT_057979d8);
    FUN_012d0dc8(PTR_DAT_057d40c0);
    bRam0000000005c3ac42 = 1;
  }
  iStack_24 = 0;
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_05779970;
  puVar1 = PTR_DAT_0575ad60;
  if (lVar3 != 0) {
    System_Collections_Generic_Queue_QueueItem____ctor_3369468
              (lVar3,*(undefined8 *)PTR_DAT_057acf08);
    *(long *)(param_1 + 0x10) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x10),lVar3);
    System_Object___ctor_23dfe5c(param_1,0);
    iStack_24 = **(int **)(*(long *)puVar2 + 0xb8);
    **(int **)(*(long *)puVar2 + 0xb8) = iStack_24 + 1;
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057979d8;
    if (lVar3 != 0) {
      System_Threading_ThreadStart___ctor_2a9a250(lVar3,param_1,*(undefined8 *)PTR_DAT_05767590,0);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057d40c0;
      if (lVar4 != 0) {
        System_Threading_Thread___ctor_2a0a0f0(lVar4,lVar3,0);
        uVar5 = System_Int32__ToString_26c9768(&iStack_24,0);
        uVar5 = System_String__Concat_1ec3580(*(undefined8 *)puVar1,uVar5,0);
        System_Threading_Thread__set_Name_2a0af60(lVar4,uVar5,0);
        System_Threading_Thread__Start_2a0a41c(lVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


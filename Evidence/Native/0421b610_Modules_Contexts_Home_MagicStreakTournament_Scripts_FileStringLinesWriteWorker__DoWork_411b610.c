/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FileStringLinesWriteWorker$$DoWork
Il2CppObject* Modules_Contexts_Home_MagicStreakTournament_Scripts_FileStringLinesWriteWorker__DoWork (Modules_Contexts_Home_MagicStreakTournament_Scripts_FileStringLinesWriteWorker_o* __this, System_EventArgs_o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FileStringLinesWriteWorker$$DoWork
   Il2CppObject*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_FileStringLinesWriteWorker__DoWork
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_FileStringLinesWriteWorker_o* __this,
   System_EventArgs_o* args, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_FileStringLinesWriteWorker__DoWork_411b610
          (undefined8 param_1,long *param_2)

{
  byte bVar1;
  
  if ((bRam0000000005c3ac4c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05760288);
    bRam0000000005c3ac4c = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05760288 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05760288))
    {
      System_IO_File__WriteAllLines_34864ac(param_2[2],param_2[3],0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


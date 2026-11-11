/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FileByteWriteWorker$$DoWork
Il2CppObject* Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteWriteWorker__DoWork (Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteWriteWorker_o* __this, System_EventArgs_o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FileByteWriteWorker$$DoWork
   Il2CppObject* Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteWriteWorker__DoWork
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteWriteWorker_o* __this,
   System_EventArgs_o* args, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteWriteWorker__DoWork_411b580
          (undefined8 param_1,long *param_2)

{
  byte bVar1;
  
  if ((bRam0000000005c3ac4b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057efd48);
    bRam0000000005c3ac4b = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057efd48 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057efd48))
    {
      System_IO_File__WriteAllBytes_3485dbc(param_2[2],param_2[3],0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


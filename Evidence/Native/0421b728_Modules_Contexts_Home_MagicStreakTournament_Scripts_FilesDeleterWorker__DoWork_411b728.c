/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FilesDeleterWorker$$DoWork
Il2CppObject* Modules_Contexts_Home_MagicStreakTournament_Scripts_FilesDeleterWorker__DoWork (Modules_Contexts_Home_MagicStreakTournament_Scripts_FilesDeleterWorker_o* __this, System_EventArgs_o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FilesDeleterWorker$$DoWork
   Il2CppObject* Modules_Contexts_Home_MagicStreakTournament_Scripts_FilesDeleterWorker__DoWork
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_FilesDeleterWorker_o* __this,
   System_EventArgs_o* args, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_FilesDeleterWorker__DoWork_411b728
          (undefined8 param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam0000000005c3ac4e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578e268);
    bRam0000000005c3ac4e = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0578e268 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0578e268))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    lVar3 = param_2[2];
    if (lVar3 != 0) {
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar4 = 0;
        uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          System_IO_File__Delete_34847a4(*(undefined8 *)(lVar3 + 0x20 + uVar4 * 8),0);
          uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


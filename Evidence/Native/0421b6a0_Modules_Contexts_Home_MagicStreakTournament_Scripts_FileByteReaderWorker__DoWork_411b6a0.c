/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FileByteReaderWorker$$DoWork
Il2CppObject* Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker__DoWork (Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker_o* __this, System_EventArgs_o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0358585c) */
/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.FileByteReaderWorker$$DoWork
   Il2CppObject* Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker__DoWork
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker_o* __this,
   System_EventArgs_o* args, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_FileByteReaderWorker__DoWork_411b6a0
          (undefined8 param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  
  if ((bRam0000000005c3ac4d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05776a10);
    bRam0000000005c3ac4d = 1;
  }
  puVar3 = PTR_DAT_057c2308;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_05776a10 + 300);
  if ((*(byte *)(*param_2 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05776a10)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
  lVar10 = param_2[2];
  if ((bRam0000000005c3279c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1ab0,0);
    FUN_012d0dc8(PTR_DAT_057c2308);
    FUN_012d0dc8(PTR_DAT_058165e8);
    bRam0000000005c3279c = 1;
  }
  plVar5 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_058165e8;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_IO_FileStream___ctor_3573b14(plVar5,lVar10,3,1,1,1,0);
  uVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
  if (0x7fffffff < (long)uVar6) {
    thunk_FUN_0136d790(PTR_DAT_057e9f90);
    lVar10 = thunk_FUN_01320e48();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar7 = thunk_FUN_0136d790(PTR_DAT_05759d00);
    System_IO_IOException___ctor_29a5a98(lVar10,uVar7,0);
    uVar7 = thunk_FUN_0136d790(PTR_DAT_057f1768);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(lVar10,uVar7);
  }
  if (uVar6 == 0) {
    uVar7 = System_IO_File__ReadAllBytesUnknownLength_348594c(plVar5);
  }
  else {
    uVar7 = FUN_012d0e38(*(undefined8 *)PTR_DAT_057f1ab0,uVar6 & 0xffffffff);
    if (0 < (int)uVar6) {
      iVar12 = 0;
      do {
        iVar4 = (**(code **)(*plVar5 + 0x358))
                          (plVar5,uVar7,iVar12,uVar6 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x360));
        if (iVar4 == 0) {
          uVar7 = System_IO_Error__GetEndOfFile_29a5bf0(0);
          uVar9 = thunk_FUN_0136d790(PTR_DAT_057f1768);
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(uVar7,uVar9);
        }
        uVar2 = (int)uVar6 - iVar4;
        uVar6 = (ulong)uVar2;
        iVar12 = iVar4 + iVar12;
      } while (0 < (int)uVar2);
    }
  }
  lVar10 = *plVar5;
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_035857f4;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar3,0);
LAB_035857f4:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return uVar7;
}


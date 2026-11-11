/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$Get
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Get (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this, System_String_o* url, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$Get
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Get
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this,
   System_String_o* url, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Get_3e0a950
          (long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_24;
  
  if ((bRam0000000005c38045 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05775250);
    bRam0000000005c38045 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    if (lVar5 != 0) {
      lVar4 = *(long *)PTR_DAT_05775250;
      uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0xa8) + 8))();
      if ((int)uVar1 < 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0xb0);
        uStack_24 = uVar2;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_0131942c();
        }
        uVar3 = thunk_FUN_01320a8c(lVar5,&uStack_24);
        System_ThrowHelper__ThrowKeyNotFoundException_26a54c0(uVar3,0);
        uVar3 = 0;
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x18);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        uVar3 = *(undefined8 *)(lVar5 + (long)(int)uVar1 * 0x18 + 0x30);
      }
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


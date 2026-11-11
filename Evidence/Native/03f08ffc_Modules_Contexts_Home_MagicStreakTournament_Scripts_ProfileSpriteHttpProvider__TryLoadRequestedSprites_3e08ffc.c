/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteHttpProvider$$TryLoadRequestedSprites
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__TryLoadRequestedSprites (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider_o* __this, System_Collections_Generic_List_ProfileSpriteCacheRequest__o* profileSpriteCacheRequests, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteHttpProvider$$TryLoadRequestedSprites
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__TryLoadRequestedSprites
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider_o* __this,
   System_Collections_Generic_List_ProfileSpriteCacheRequest__o* profileSpriteCacheRequests, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__TryLoadRequestedSprites_3e08ffc
               (long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  puVar4 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c38036 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057cc850);
    FUN_012d0dc8(PTR_DAT_057c8fe0);
    FUN_012d0dc8(PTR_DAT_0576ead8);
    FUN_012d0dc8(PTR_DAT_057808f0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c38036 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = System_DateTime__get_UtcNow_2100638(0);
  uVar6 = System_DateTime__op_GreaterThan_2102170(uVar8,uVar5,0);
  puVar3 = PTR_DAT_057c8fe0;
  puVar2 = PTR_DAT_0576c1b8;
  if ((uVar6 & 1) == 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      if (param_2 == 0) {
LAB_03f09208:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar1 = *(int *)(param_2 + 0x18);
      do {
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) {
            return;
          }
          lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (param_2,iVar1,*(undefined8 *)puVar3);
          if (lVar7 == 0) goto LAB_03f09208;
        } while ((*(char *)(lVar7 + 0x28) != '\0') || (*(char *)(lVar7 + 0x29) != '\0'));
        if (*(char *)(param_1 + 0x28) != '\0') {
          return;
        }
      } while ((*(ulong *)(lVar7 + 0x30) >> 0x20 != 0) || ((*(ulong *)(lVar7 + 0x30) & 0xff) == 0));
      Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__LoadSpritesAsync_3e096f0
                (param_1);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = System_DateTime__get_UtcNow_2100638(0);
      lVar7 = *(long *)puVar2;
      fVar9 = *(float *)(param_1 + 0x10);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar7);
      }
      uVar5 = System_TimeSpan__FromSeconds_269a000((double)fVar9,0);
      uVar8 = System_DateTime__op_Addition_2101d60(uVar8,uVar5,0);
      *(undefined8 *)(param_1 + 0x20) = uVar8;
    }
    else {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = System_DateTime__get_UtcNow_2100638(0);
      lVar7 = *(long *)puVar2;
      fVar9 = *(float *)(param_1 + 0x14);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar7);
      }
      uVar5 = System_TimeSpan__FromSeconds_269a000((double)fVar9,0);
      uVar8 = System_DateTime__op_Addition_2101d60(uVar8,uVar5,0);
      *(undefined8 *)(param_1 + 0x20) = uVar8;
      *(undefined1 *)(param_1 + 0x28) = 0;
      fVar9 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14);
      if (*(float *)(param_1 + 0x18) <= fVar9) {
        fVar9 = *(float *)(param_1 + 0x18);
      }
      *(float *)(param_1 + 0x14) = fVar9;
    }
  }
  return;
}


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$SetType
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__SetType (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, int32_t keyLockType, bool isDouble, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$SetType
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__SetType
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, int32_t
   keyLockType, bool isDouble, int32_t bottleHeight, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__SetType_248f038
               (long param_1,int param_2,ulong param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__DeactivateAllViews_248f1dc
            ();
  if (param_4 == 4) {
    if ((param_3 & 1) == 0) {
      plVar4 = (long *)(param_1 + 0x20);
    }
    else {
      plVar4 = (long *)(param_1 + 0x28);
    }
  }
  else if (param_4 == 5) {
    if ((param_3 & 1) == 0) {
      plVar4 = (long *)(param_1 + 0x30);
    }
    else {
      plVar4 = (long *)(param_1 + 0x38);
    }
  }
  else {
    plVar4 = (long *)(param_1 + 0x68);
  }
  plVar6 = (long *)(param_1 + 0x68);
  *plVar6 = *plVar4;
  FUN_012d0d74(plVar6);
  if ((*plVar6 == 0) ||
     (lVar2 = UnityEngine_Component__get_gameObject_408b480(*plVar6,0), lVar2 == 0))
  goto LAB_0258f1d8;
  UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
  if (param_2 == 1) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) goto LAB_0258f1d8;
    if ((param_3 & 1) == 0) {
      if (param_4 != 4) {
        puVar5 = (undefined8 *)(lVar2 + 0x50);
      }
      else {
        puVar5 = (undefined8 *)(lVar2 + 0x28);
      }
    }
    else if (param_4 != 4) {
      puVar5 = (undefined8 *)(lVar2 + 0x68);
    }
    else {
      puVar5 = (undefined8 *)(lVar2 + 0x30);
    }
  }
  else if (param_2 == 2) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) goto LAB_0258f1d8;
    if ((param_3 & 1) == 0) {
      if (param_4 != 4) {
        puVar5 = (undefined8 *)(lVar2 + 0x48);
      }
      else {
        puVar5 = (undefined8 *)(lVar2 + 0x38);
      }
    }
    else if (param_4 != 4) {
      puVar5 = (undefined8 *)(lVar2 + 0x70);
    }
    else {
      puVar5 = (undefined8 *)(lVar2 + 0x40);
    }
  }
  else if (param_2 == 3) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) goto LAB_0258f1d8;
    if ((param_3 & 1) == 0) {
      if (param_4 == 4) {
        puVar5 = (undefined8 *)(lVar2 + 0x18);
      }
      else {
        puVar5 = (undefined8 *)(lVar2 + 0x58);
      }
    }
    else {
      if (param_4 == 4) goto LAB_0258f144;
      puVar5 = (undefined8 *)(lVar2 + 0x60);
    }
  }
  else {
    if ((*plVar6 == 0) || (lVar2 = *(long *)(*plVar6 + 0x20), lVar2 == 0)) goto LAB_0258f1d8;
LAB_0258f144:
    puVar5 = (undefined8 *)(lVar2 + 0x20);
  }
  if ((*plVar6 != 0) && (lVar2 = *(long *)(*plVar6 + 0x20), lVar2 != 0)) {
    UnityEngine_U2D_Animation_SpriteLibrary__set_spriteLibraryAsset_1e38a88(lVar2,*puVar5,0);
    lVar2 = *plVar6;
    if (lVar2 == 0) {
      return;
    }
    if ((bRam0000000005c2b28f & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057719c0);
      bRam0000000005c2b28f = 1;
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)PTR_DAT_057719c0;
      if (pcRam0000000005c28b88 == (code *)0x0) {
        pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar3,0,0);
      }
      uVar1 = (*pcRam0000000005c28b88)(uVar3);
      if (pcRam0000000005c28b70 == (code *)0x0) {
        pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
      }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28b70)(0,lVar2,uVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_0258f1d8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


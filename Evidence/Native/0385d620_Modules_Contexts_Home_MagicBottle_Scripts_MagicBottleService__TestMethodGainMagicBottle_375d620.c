/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$TestMethodGainMagicBottle
void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TestMethodGainMagicBottle (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$TestMethodGainMagicBottle
   void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TestMethodGainMagicBottle
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__TestMethodGainMagicBottle_375d620
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 10;
  do {
    uVar1 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__HasMagicBottle_375d4e4
                      (param_1);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if ((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + 0x20), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
      *(undefined2 *)(lVar2 + 0x18) = 0x101;
    }
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}

